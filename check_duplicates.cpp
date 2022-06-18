#include <bits/stdc++.h>

using namespace std;

void print_arr(int arr[], int n);
string search_duplicates(int arr[], int n);


int main(){

	int n; cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	print_arr(arr, n);
	cout<<search_duplicates(arr, n);

	
	return 0;
}

void print_arr(int arr[], int n){
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

string search_duplicates(int arr[], int n){

	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(arr[i] == arr[j]){
				return "YES";
			}
		}
	}

	return "NO";

}