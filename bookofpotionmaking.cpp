#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n;
	int s = 0, j = 10;
	cin >> n;
	while(n != 0){
		s += j * (n % 10);
		n /= 10, j--;
	}
	if(!(s % 11))	cout << "Legal ISBN";
	else cout << "Illegal ISBN";
}
