#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a = 0;
    int b = 1;

    cout << a << " " << b << " ";

    for(int i=1; i<=n; i++){
        int number = a + b;
        cout << number << " ";

        a = b;
        b = number;
    }
    cout << endl;

    return 0;
}
