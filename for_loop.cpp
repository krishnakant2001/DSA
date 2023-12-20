#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // 1st way
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;


    // 2nd way
    int k=1;
    for(; ; ){
        if(k <= n){
            cout << k << " ";
        }
        else{
            break;
        }
        k++;
    }
    cout << endl;

    // 3rd way
    for(int a=4, b=6; a>=0 && b>=0; a--, b--){
        cout << a << " " << b << endl;
    }

    return 0;
}