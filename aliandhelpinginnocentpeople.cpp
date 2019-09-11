#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	bool f = true;
	cin >> s;
	for(int i = 0; i < s.length(); i++){	
		if((s[0] + s[1]) & 1){	f = false;	break;}
		if((s[3] + s[4]) & 1){ f = false; break;}
		if((s[4] + s[5]) & 1){	f = false; break;}
		if(s[2] == 'A' || s[2] == 'E' || s[2] == 'I' || s[2] == 'O' || s[2] == 'U' || s[2] == 'Y'){	f = false;	break;}
	}
	if(f)	cout << "valid";
	else cout << "invalid";
	cout << endl;
}
