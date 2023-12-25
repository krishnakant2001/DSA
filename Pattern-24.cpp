#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;
    while(i <= n){

        int space = n-i;
        while(space){
            cout << "  ";
            space--;
        }

        int j=1;
        while(j <= i){
            cout << j << " ";
            j++;
        }

        int k = j-2;
        while(k >= 1){
            cout << k << " ";
            k--;
        }

        i++;
        cout << endl;
    }
    return 0;
}