#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n){
        int j=1;
        while(j <= i){
            cout << i-j+1 <<  " ";
            j++;
        }
        cout << endl;
        i++;
    }
    // int i=1;
    // while(i <= n){
    //     int j=1;
    //     int val = i;
    //     while(j <= i){
    //         cout << val << " ";
    //         val--;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }
    return 0;
}