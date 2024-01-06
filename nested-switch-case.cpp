#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    char ch;
    cin >> ch;

    switch(ch){

        case 'a': switch(n){
            case 1: cout << "KrishnaKant" << endl;
                    break;
            case 2: cout << "Pratham" << endl;
                    break;
            default: cout << "No name" << endl;
        }

        break;

        case 'b': cout << "out of bound" << endl;
        break;

        default: cout << "please check once again" << endl;
    }
    return 0;
}