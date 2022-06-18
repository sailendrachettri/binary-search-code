#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int search_element_nearly_sorted(int arr[], int size, int key);


int main(){

	int size, key; cin>>key>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);
	int ind = search_element_nearly_sorted(arr, size, key);
	if(ind<0) cout<<"Not found.";
	else cout<<key<<" found at index "<<ind;

	
	return 0;
}

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int search_element_nearly_sorted(int arr[], int size, int key){
	int start=0, end=size-1;
	int mid;

	while(start<=end){
		mid = start + (end-start)/2;

		if(key==arr[mid]) return mid;
		else if(mid-1 >= start and arr[mid-1]==key) return mid-1;
		else if(mid+1 <= end and arr[mid+1]==key) return mid+1;
		else if(key <= arr[mid]) end = mid-2;
		else start = mid+2;
	}
	return -1;
}