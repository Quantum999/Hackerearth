#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, r, k, cnt = 0, f;
	cin >> l >> r >> k;
	int d = 1;
	while(r >= k * d){
		if(l <= k * d)	cnt++;
		d++;
	}
	cout << cnt;
}
