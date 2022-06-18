#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int number_times_arr_rotated(int arr[], int size);
int search_left(int arr[], int start, int end, int ele);
int search_right(int arr[], int start, int end, int ele);


int main(){
	int size; cin>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);

	// search element
	int ele, left, right, ind;
	ele = 11;
	ind = number_times_arr_rotated(arr, size);
	left = search_left(arr, 0, ind, ele);
	right = search_left(arr, ind, size-1, ele);

	if(left < 0 and right < 0)
		cout<<"Element "<<ele<<" not found.";

	else if(left<0)
		cout<<ele<<" found at "<<right;

	else 
		cout<<ele<<" found at "<<left;
	
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

int search_right(int arr[], int start, int end, int ele){
	while(start<=end){
		int mid = start + (end-start)/2;
		if(ele==arr[mid]){
			return mid;

		} else if(ele <= arr[mid]){
			end = mid - 1;

		} else {
			start = mid + 1;
		}
	}
	return -1;
}

int search_left(int arr[], int start, int end, int ele){
		while(start<=end){
		int mid = start + (end-start)/2;
		if(ele==arr[mid]){
			return mid;

		} else if(ele <= arr[mid]){
			end = mid - 1;

		} else {
			start = mid + 1;
		}
	}
	return -1;
}