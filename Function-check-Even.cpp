#include <bits/stdc++.h>
using namespace std;
string isEven(int num){
    if(num & 1){
        return "Odd";
    }
    return "Even";
}
int main()
{
    int n;
    cout << "Enter the number of test cases: ";
    cin >> n;

    while(n--){
        int a;
        cin >> a;
        cout << a << " is " << isEven(a) << endl;
    }

    return 0;
}