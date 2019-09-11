#include <bits/stdc++.h>
using namespace std;

bool check(string s, int i){
	if(i > (s.length() - 1) / 2)	return true;
	if(s[i] != s[s.length() - i - 1])	return false;
	check(s, i + 1);
}

int main(){
	string s;
	cin >> s;
	if(check(s, 0))	cout << "YES";
	else cout << "NO";
}
