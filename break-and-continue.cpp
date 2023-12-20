#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=0; i<=n; i++){
        if(i % 5 == 0){
            //skips the iteration
            continue;
        }
        if(i % 11 == 0){
            //stop the loop
            break;
        }
        cout << i << " ";
    }
    
    cout << endl;

    
    return 0;
}