#include <bits/stdc++.h>
using namespace std;

int firstdig(int k){
  if(k / 10 == 0) return k;
  else return firstdig(k / 10);
}

int main(){
	//string s;
	//cin >> s;
	//for(int i : s)
		//cout << i;
	//cout << (char)96;
	//int t = 3;
	//int c = t ^ 1 ^ 3;
	//cout << c;
	int t;
	cin >> t;
	cout << firstdig(t);
}
