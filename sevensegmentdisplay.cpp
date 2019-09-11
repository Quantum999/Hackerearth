#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	int t;
	cin >> t;
	while(t--){
		int match = 0, seven = 0, one;
		string s;
		cin >> s;
		for(int i = 0; i < s.length(); i++)
			match += arr[s[i] - '0'];
		if(match & 1)	one = (match - 1)	/ 2 - 1, seven = 1;
		else one = match / 2, seven = 0;
		if(seven == 1)	cout << "7";
		for(int i = 1; i <= one; i++)
			cout << "1";
		cout << endl;
	}
}
