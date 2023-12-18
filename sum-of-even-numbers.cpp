#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int i=1;

    while(i <= n){
        if(i % 2 == 0){
            sum = sum + i;
        }
        i++;
    }
    cout << "Sum of Even Numbers is " << sum << endl;
    return 0;
}