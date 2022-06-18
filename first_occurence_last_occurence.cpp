#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int first_occurence(int arr[], int n, int search_val);
int last_occurence(int arr[], int n, int search_val);

int main(){

	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	print_arr(arr, n);

	// search for first occurence
	// int search_val = 10;
	// int result = first_occurence(arr, n, search_val);
	// if(result==-1) cout<<search_val<<" is not present."<<endl;
	// else cout<<search_val<<" first occur at index "<<result;

	// search for last occurence
	int search_val = 3;
	int result = last_occurence(arr, n, search_val);
	if(result==-1) cout<<search_val<<" is not present."<<endl;
	else cout<<search_val<<" last occur at index "<<result;

	
	return 0;
}

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int first_occurence(int arr[], int n, int search_val){
	int start = 0, end = n-1;
	int res = -1;

	while(start<=end){
		int mid = start + (end-start)/2;
		if(search_val==arr[mid]){
			res = mid;
			end = mid-1;

		}else if(mid < arr[mid]){
			end = mid - 1;

		} else{
			start = mid + 1;
		}
	}
	return res;
}

int last_occurence(int arr[], int n, int search_val){
	int start = 0, end = n-1;
	int res = -1;

	while(start<=end){
		int mid = start + (end-start)/2;
		if(search_val==arr[mid]){
			res = mid;
			start = mid+1;

		}else if(mid < arr[mid]){
			end = mid - 1;

		} else{
			start = mid + 1;
		}
	}
	return res;
}