#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 3, j = 1, s = 0;
	while(s < n){
		s += (3 * j);
		j++;
	}
	j--;
	if(n <= (s - (3 * j)) + j)	cout << "PATLU";
	else cout << "MOTU";
}
