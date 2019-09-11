#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 1, n, a;
	cin >> n;
	for(int i = 0; i < n; i++)	cin >> a, ans = (ans * a) % 1000000007;
	cout << ans;
}
