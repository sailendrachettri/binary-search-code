#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int isArraySorted(int arr[], int n){
	if(n==1) return 1;
	return (arr[n-1] < arr[n-2] ? 0 : isArraySorted(arr, n-1));
}


int main(){
	int n; cin>>n;
	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	print_arr(arr, n);

	int res = isArraySorted(arr, n);
	(res==1) ? cout<<"Sorted." : cout<<"Not sorted.";


	
	return 0;
}