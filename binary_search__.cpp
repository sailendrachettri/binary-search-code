#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int size){
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int binary_search(int arr[], int size, int ele){
	int low = 0, high = size-1, mid;

	while(low <= high){
		mid = low + (high-low)/2;

		if(ele == arr[mid]) return mid;
		else if(ele < arr[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}


int main(){

	int size; cin>>size;
	int arr[size];

	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}

	print_arr(arr, size);

	// searching element
	int ele = 4;

	sort(arr, arr+size);
	print_arr(arr, size);

	int res = binary_search(arr, size, ele);
	if(res >= 0) cout<<"Element found at index "<<res<<endl;
	else cout<<"Element not found."<<endl;




	
	return 0;
}