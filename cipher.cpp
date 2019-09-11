#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int n;
	cin >> s;
	cin >> n;
	int z = n;
	for(int i = 0; i < s.length(); i++){
		if(isalpha(s[i])){
			if(isupper(s[i]))
				s[i] = ((s[i] + n) - 65) % 26 + 65;
			else
       	s[i] = ((s[i] + n) - 97) % 26 + 97;
		}
		if(isdigit(s[i]))
			s[i] = ((s[i] - '0') + z) % 10 + '0';
	}
	cout << s;
}
