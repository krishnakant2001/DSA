#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n){
        int j=i;

        while(j < 2*i){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    // int i=1;
    // while(i <= n){
    //     int count = i;
    //     int j=1;
    //     while(j <= i){
    //         cout << count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    return 0;
}