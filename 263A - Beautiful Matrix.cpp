#include <iostream>
using namespace std;

int main() 
{
    int arr[6][6];
    int ans = 0;
    int row, column;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cin >> arr[i][j];
            if (arr[i][j] == 1) {row = i; column = j;}
        }
    }
    ans += abs(3 - row) + abs(column - 3);
    cout << ans;
}
