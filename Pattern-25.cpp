#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;

    while(i<=n){
        int j=1;
        while(j <= n-i+1){
            cout << j << " ";
            j++;
        }

        int k = i-1;
        while(k--){
            cout << "* ";
        }

        k = 1;
        while(k <= i-1){
            cout << "* ";
            k++;
        }

        int q = j-1;
        while(q >= 1){
            cout << q << " ";
            q--;
        }

        i++;
        cout << endl;
    }
    return 0;
}