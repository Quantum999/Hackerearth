#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, n, a = 0, b = 7;
	cin >> t;
	while(t--){
		cin >> n;
		if(abs(n - a) <= abs(n - b))	cout << "A", a = n;
		else cout << "B", b = n;
		cout << endl;
	}
}
