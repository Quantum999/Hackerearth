#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int g, p, n, sumg = 0, sump = 0;
		cin >> g >> p >> n;
		int mi = min(p, g), ma = max(p, g);
		while(n--){
			int a, b;
			cin >> a >> b;
			sumg += a, sump += b;
		}
		if(sumg >= sump)	cout << (mi * sumg) + (ma * sump);
		else cout << (mi * sump) + (ma * sumg);
		cout << endl;
	}
}	
