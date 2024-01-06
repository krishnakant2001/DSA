#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//here int arr[] stored the first address of the array
void scope(int arr[], int n){
    cout << "Changes start" << endl;
    for(int i=0; i<n; i++){
        if(i & 1){
            //odd index
            arr[i] = arr[i] + 1;
        }
    }
    print(arr, n);
    cout << "Changes finish" << endl;
}
int main()
{
    int arr[] = {3, 5, 4, 11, 6};
    cout << "Before Function calling " << endl;
    print(arr, 5);
    cout << endl;

    scope(arr, 5);
    cout << endl;

    cout << "After Function calling " << endl;
    print(arr, 5);

    return 0;
}