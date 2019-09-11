#include <bits/stdc++.h>
using namespace std;

void type(int h, int n){
	if(h & 1){
		if(h - n == 0)	cout << "AS";
		else if(h - n == 1)	cout << "MS";
		else cout << "WS";
	}
	else{
    if(h - n == 0)  cout << "WS";
    else if(h - n == 1) cout << "MS";
    else cout << "AS";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n % 12 == 0){ cout << n - 11 << " WS" << endl; continue;}
		int lower = (n - (n % 12)) + 1;
		int higher = n + (12 - n % 12);
		int h = n + (3 - n % 3);
		if(n > lower + 5){
			cout << higher - (n - lower) << " ";
			type(h, n);
		}
		else{
			cout << lower + (higher - n) << " ";
			type(h, n);
		}
	}
}
