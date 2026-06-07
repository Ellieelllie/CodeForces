#include <bits/stdc++.h>

using namespace std;

int main() {
    string a; cin >> a;
    sort(a.begin(), a.end());
    int num = 0;
    for(int i = 0; i < a.length(); i++){
        if (a[i+1] != a[i]) num++;
    }
    if(num%2==0) cout <<"CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    
}
