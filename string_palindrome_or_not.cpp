#include <bits/stdc++.h>

using namespace std;


int main(){

	string s, temp; cin>>s;
	temp = s;

	reverse(temp.begin(), temp.end());
	
	if(s == temp) cout<<s<<" is palindrome.";
	else cout<<s<<" is not palindrome.";


	
	return 0;
}