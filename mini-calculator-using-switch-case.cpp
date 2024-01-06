//mini calculator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a: " ;
    cin >> a;

    int b;
    cout << "Enter the value of b: " ;
    cin >> b;

    char ch;
    cout << "Enter the operation you want to perform" << endl;
    cin >> ch;

    switch(ch){
        case '+': cout << (a+b) << endl;
                  break;

        case '-': cout << (a-b) << endl;
                  break;

        case '*': cout << (a*b) << endl;
                  break;

        case '/': cout << (a/b) << endl;
                  break;

        case '%': cout << (a%b) << endl;
                  break;

        default: cout << "Please Enter the valid operation" << endl;
    }
    return 0;
}