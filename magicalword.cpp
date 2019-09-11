#include <bits/stdc++.h>
using namespace std;
bool sieve[100];

int main(){
	int t;
	cin >> t;
	bool sieve[1000];
	for(int i = 0; i < 1000; i++) sieve[i] = true;
	for(int i = 2; i * i <= 130; i++)
		if(sieve[i])
			for(int j = i * i; j <= 130 ; j += i)
				sieve[j] = false;
	while(t--){
		int n, j, k;
		cin >> n;
		string s, s1 = "";
		cin >> s;
		for(int i : s){
			if(i < 65)	i = 65;
			else if(i > 90 && i < 97)	i = (i <= 93) ? 90 : 97;
			else if(i > 122)	i = 122;
			if(i >= 65 && i <= 90){
				j = i;
				while(!sieve[j] && j > 65)	j--;
				k = i;
				while(!sieve[k] && k < 90)	k++;
			}
			else if(i >= 97 && i <= 122){
      	j = i;
      	while(!sieve[j] && j > 97) j--;
     	  k = i;
      	while(!sieve[k] && k < 122) k++;
			}
			if(sieve[j] && sieve[k]){
				if(abs(i - j) <= abs(i - k))	s1 += j;
				else if(abs(i - j) > abs(i - k))	s1 += k;
			}
			else{
				if(sieve[j])	s1 += j;
				else s1 += k;
			}
		}
		cout << s1 << endl;
	}
}
