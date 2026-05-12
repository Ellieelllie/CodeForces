#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b, c, cnt;
    cin >>n;
    cnt = 0;
    while (n--){
        cin >> a >> b >> c;
        if ((a + b + c) >= 2) cnt++;
        
    }
    cout<<cnt;
    return 0;
}
