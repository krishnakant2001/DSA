#include <bits/stdc++.h>
using namespace std;
int fact(int x){

    int ans = 1;

    for(int i=1; i<=x; i++){
        ans = ans*i;
    }
    
    return ans;
}
int nCr(int n, int r){

    int numerator = fact(n);

    int denominator = fact(r)*fact(n-r);

    int ans = numerator/denominator;

    return ans;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r) << endl;

    return 0;
}