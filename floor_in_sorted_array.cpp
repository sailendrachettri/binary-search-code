#include <bits/stdc++.h>

using namespace std;

/*
Floor in the sense - if we are searching the floor of 5 and that value is present in array then return that value. Otherwise return key-1 value;
*/

void print_arr(int arr[], int size);
int find_floor(int arr[], int size, int key);

int main(){

	int size, key; cin>>key>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);
	int res = find_floor(arr, size, key);

	if(res<0) cout<<"Not found.";
	else cout<<"Floor of the "<<key<<" is "<<res;

	
	return 0; @1234sai+
}

void print_arr(int arr[], int size){
	for(int i =0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int find_floor(int arr[], int size, int key){
	int start=0, end=size-1;
	int mid, res;

	while(start<=end){
		mid = start + (end-start)/2;

		if(key==arr[mid]) return arr[mid];
		else if(arr[mid]<key){
			res = arr[mid];
			start = mid+1;

		}else if(arr[mid]>key){
			end = mid-1;
		}
	}
	return res;
}