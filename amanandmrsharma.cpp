#include <bits/stdc++.h>
using namespace std;

int main(){
	int d, r, h, toffee = 0;
	cin >> d;
	while(d--){
		cin >> r >> h;
		if((44 * r) / 7 <= 100 * h)	toffee++;
	}
	cout << toffee;
}
