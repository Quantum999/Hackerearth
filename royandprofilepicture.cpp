#include <bits/stdc++.h>
using namespace std;

int main(){
	int l, n, w, h;
	cin >> l >> n;
	while(n--){
		cin >> w >> h;
		if(w >= l && h >= l){
			if(w == h)	cout << "ACCEPTED";
			else	cout << "CROP IT";
		}
		else
			cout << "UPLOAD ANOTHER";
		cout << endl;
	}	
}
