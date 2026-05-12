#include <iostream>
using namespace std;
int main() 
{
    int n, k, b; cin >> n >> k;
    int arr[n];
    int advance = 0;
    for (int i = 0 ; i < n; i++){
      cin >> b;
      arr[i] = b;
    }
    int kvalue = arr[k-1];
    for (int i = 0; i < n; i++){
      if (arr[i] >= kvalue && arr[i] != 0) {
        advance++;
      }
    }
    cout << advance;
    return 0;
}
