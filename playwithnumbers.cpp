#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int arr[10000000];
    int q, n;
    cin >> n >> q;
    arr[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> arr[i], arr[i] = arr[i] + arr[i - 1];
    while(q--){
        int start, end;
        cin >> start >> end;
        cout << (arr[end] - arr[start - 1]) / (end - start + 1) << endl;
    }
}

