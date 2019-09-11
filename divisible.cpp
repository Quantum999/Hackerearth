#include <bits/stdc++.h>
using namespace std;

int firstdig(int k){
	if(k / 10 == 0)	return k;
	else return firstdig(k / 10);
}

int main(){
	int n, a = 0, k, i, j = 1;
	cin >> n;
	string s;
	for(i = 1, j = 1; i <= n / 2; i++, j *= (-1))
		cin >> k,	a += j * firstdig(k);
	if(!(i & 1))	j = -1;
	else j = 1;
  for(int i = 1; i <= n / 2; i++, j *= (-1))
    cin >> k, a += j * (k % 10);
	if(a % 11 == 0)	cout << "OUI";
	else cout << "NON";
}	
