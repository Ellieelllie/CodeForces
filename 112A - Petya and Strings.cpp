#include <iostream>
using namespace std;

int main() 
{
    string a, b; cin >> a >> b;
    int n = a.length();
    for(int i = 0; i < n; i++){
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    if (a == b) {cout << 0; return 0;}
    for (int i = 0; i < n; i++){
        if(a[i] - 'A' + 1 < b[i] - 'A' + 1) {cout << -1; return 0;}
        if (a[i] - 'A' + 1 > b[i] - 'A' + 1) {cout << 1; return 0;}
    }
}
