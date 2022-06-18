#include <bits/stdc++.h>

using namespace std;

int powerOfNumber(int base, int exp){
	if(exp==0) return 1;
	base = base * powerOfNumber(base, exp--);
	return base;
}


int main(){
	int base, exp; cin>>base>>exp;
	int res = powerOfNumber(base, exp);
	cout<<res;

	
	return 0;
}