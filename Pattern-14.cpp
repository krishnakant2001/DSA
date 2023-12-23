#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i=1;

    while(i <= n){
        char start = 'A' + i - 1;
        int j=1;
        while(j <= n){
            //formula
            // char ch = 'A' + i + j - 2;
            cout << start << " ";
            start = start + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}