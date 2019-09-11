#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		map<char, int> mp1, mp2;
		int f = 1;
		string s1, s2;
		cin >> s1 >> s2;
		for(char i : s1)
			mp1[i]++;
		for(char i : s2)
			mp2[i]++;
		for(auto i : mp1)
			if(i.second != mp2[i.first])
				f = 0;
		if(f)	cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
