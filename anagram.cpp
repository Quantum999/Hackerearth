#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int cnt = 0;
		map<char, int> mp1, mp2;
		for(int i = 0; i < s1.length(); i++)	mp1[s1[i]]++;
		for(int i = 0; i < s2.length(); i++)  mp2[s2[i]]++;
		for(auto i : mp1)
			cnt += min(i.second, mp2[i.first]);
		cout << (s1.length() + s2.length()) - 2 * cnt;
	}
}
