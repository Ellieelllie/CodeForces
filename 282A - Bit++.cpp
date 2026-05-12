#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin >> a;
    string b;
    int sum = 0;
    while (a--){
      cin >> b;
      if (b == "++X" or b =="X++") sum += 1;
      else sum -= 1;
    }
    cout << sum;
    return 0;
}
