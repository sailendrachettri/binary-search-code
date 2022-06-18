#include <bits/stdc++.h>

using namespace std;


int main(){

	int n; cin>>n;
	bool flag = true;

	if(n < 2) {
		cout<<"Number should be greater than 2.";
		return 0;
	}


	for(int i = 2; i <= n/2; i++){
		if(n%i == 0){
			flag = false;
			break;
		}
	}

	if(flag) cout<<n<<" is prime.";
	else cout<<n<<" is not prime.";
	
	return 0;
}