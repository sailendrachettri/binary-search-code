#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int first_occurence(int arr[], int size, int ele);
int last_occurence(int arr[], int size, int ele);

int main(){

	int size; cin>>size;
	int arr[size];

	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);

	// count number of occurence
	int ele = 2;
	int first = first_occurence(arr, size, ele);
	int last = last_occurence(arr, size, ele);

	if(first==-1 or last==-1) cout<<"Not found.";
	else cout<<ele<<" occur "<<(last-first+1)<<" times.";

	
	return 0;
}

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int first_occurence(int arr[], int size, int ele){
	int res = -1;
	int start = 0, end = size-1;

	while(start<=end){
		int mid = start + (end-start)/2;

		if(ele==arr[mid]){
			res = mid;
			end = mid - 1;

		}else if(ele<arr[mid]){
			end = mid - 1;

		}else{
			start = mid + 1;
		}
	}

	return res;
}

int last_occurence(int arr[], int size, int ele){
	int res = -1;
	int start = 0, end = size-1;

	while(start<=end){
		int mid = start + (end-start)/2;

		if(ele==arr[mid]){
			res = mid;
			start = mid + 1;

		}else if(ele<arr[mid]){
			end = mid - 1;

		}else{
			start = mid + 1;
		}
	}

	return res;
}