#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char from, char to, char aux){
	if(n==0) return;

	towerOfHanoi(n-1, from, aux, to);
	cout<<"Moved disk "<<n<<" from "<<from<<" to "<<to<<endl;
	towerOfHanoi(n-1, aux, to, from);
}


int main(){

	int n; cin>>n;
	char a, b, c; cin>>a>>b>>c;
	towerOfHanoi(n, a, b, c);

	
	return 0;
}