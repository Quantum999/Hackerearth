#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int flag = 1, n;
    cin >> n;
    cin >> s;
    if(s[0] == '.') s[0] = 'B';
    for(int i = 1; i < s.length(); i++){
        if(s[i] == 'H' && s[i - 1] == 'H'){  flag = 0; break;}
        if(s[i] == '.') s[i] = 'B';
    }
    if(flag)    cout << "YES" << endl << s;
    else cout << "NO";
}
