#include <bits/stdc++.h>

using namespace std;

int squareOfNum(int n){
	return n*n;
}


int main(){

	int n, sum=0; cin>>n;
	int arr[n];

	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	for(int i = 0; i< n; i++){
		// sum += squareOfNum(arr[i]);
		sum += arr[i]*arr[i];
	}

	cout<<sum;





	
	return 0;
}