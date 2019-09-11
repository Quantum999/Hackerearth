#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, j, k, l = 1;
		cin >> n;
		int m = 2 * n - 2;
		for(int i = 1; i <= n; i++){
			for(j = 1; j <= l; j++)
			cout << '*';
			for(k = 1; k <= m; k++)
				cout << "#";
			for(j = 1; j <= l; j++)
				cout << "*";
			l++, m -= 2;
			cout << endl;
		}
	}
}
