#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int arr[4];
		int m, h;
		for(int i = 0; i < 4; i++)	cin >> arr[i];
		if(arr[3] < arr[1])	m = 60 - abs(arr[3] - arr[1]), h = arr[2] - arr[0] - 1;
		else	m = abs(arr[3] - arr[1]), h = arr[2] - arr[0];
		cout << h << " " << m << endl;
	}
}	
