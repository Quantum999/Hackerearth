#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		if(isupper(s[i]))
			s[i] = s[i] ^ s[i] ^ (s[i] + 32);
		else
			s[i] = s[i] ^ (s[i] - 32) ^ s[i];
	}
	cout << s;
}
