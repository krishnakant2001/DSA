#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=2;
    bool flag = true;

    while(i < n){
        if(n%i == 0){
            cout << "Not Prime" << endl;
            flag = false;
            break;
        }
        i = i+1;
    }

    if(flag){
        cout << "Prime" << endl;
    }
    return 0;
}