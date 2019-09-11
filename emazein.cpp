#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int l, r, u, d;
	l = r = u = d = 0;
	cin >> s;
	for(char i : s){
		if(i == 'L')	l++;
		else if(i == 'R')	r++;
		else if(i == 'U')	u++;
		else if(i == 'D')	d++;
	}	
	cout << 0 - l + r << " " << 0 + u - d;
}
