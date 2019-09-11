#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll arr[1000000], n;
  cin >> n;
  arr[0] = 0;
  for(int i = 1; i <= n; i++)
    cin >> arr[i], arr[i] += arr[i - 1];
  ll m = -99999999;
  for(ll i = 1; i <= n; i++){
    ll s = i, count = 2;
    while(true){
      s += count;
      if(s > n){  s -= count; break;}
      count++;
    }
    if(arr[s] - arr[i - 1] > m) m = arr[s] - arr[i - 1];
  }
  cout << m;
}
