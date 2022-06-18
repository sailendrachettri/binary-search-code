#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int number_times_arr_rotated(int arr[], int size);


int main(){
	int size; cin>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);
	// NOT working :):
	cout<<number_times_arr_rotated(arr, size)<<" times.";
	

	
	return 0;
}

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int number_times_arr_rotated(int arr[], int size){
	int start = 0, end = size-1;
	int mid, prev, next;

	while(start<=end){
		mid = start + (end-start)/2;
		prev = (mid-1)%size;
		next = (mid+size+1)%size;

		if(arr[mid]<=arr[next] and arr[mid]<=arr[prev]){
			return mid;
		}

		else if(arr[mid] <= arr[end]){
			end = mid - 1;

		} else if(arr[mid]>=arr[start]){
			start = mid + 1;
		}
	}
	return 0;
}