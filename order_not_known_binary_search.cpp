#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size);
int ascending_order_bs(int arr[], int size, int ele);
int descending_order_bs(int arr[], int size, int ele);

int main(){

	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	print_arr(arr, n);

	// binary search - order not known
	int ele = 8;

	if(n==1){
		if(ele == arr[0]){
			cout<<"At: "<<0;
		}
		
	} else if(arr[0] < arr[1]){
		cout<<endl<<"Ascending order"<<endl;
		int res = ascending_order_bs(arr, n, ele);
		if(res >= 0) cout<<"At: "<<res;
		else cout<<"Not found.";

	} else{
		cout<<endl<<"Descending order"<<endl;
		int res = descending_order_bs(arr, n, ele);
		if(res >= 0) cout<<"At: "<<res;
		else cout<<"Not found.";
	}

	
	return 0;
}


void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int ascending_order_bs(int arr[], int size, int ele){
	int low = 0, high = size - 1, mid;

	while(low <= high){
		mid = low + (high-low)/2;

		if(ele == arr[mid]) return mid;
		else if(ele < arr[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int descending_order_bs(int arr[], int size, int ele){
	int low = 0, high = size - 1, mid;

	while(low <= high){
		mid = low + (high-low)/2;

		if(ele == arr[mid]) return mid;
		else if(ele < arr[mid]) low = mid + 1;
		else high = mid - 1;
	}	
	return -1;
}
