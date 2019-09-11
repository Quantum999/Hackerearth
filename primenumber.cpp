#include <bits/stdc++.h>
using namespace std;
bool arr[10000];

int main(){
	int n;
	cin >> n;
	for(int i = 2; i * i <= n; i++){
		if(!arr[i])
			for(int j = i * i; j <= n; j += i)
				arr[j] = true;
	}
	for(int i = 2; i <= n; i++)
		if(!arr[i])
			cout << i << " ";
}	
