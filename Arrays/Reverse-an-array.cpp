#include <bits/stdc++.h>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void reverse(int arr[], int n){
    int s = 0;
    int e = n-1;

    while(s <= e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{
    int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};
    int brr[] = {4, 5, 1, 2, 45};

    print(arr, 8);

    reverse(arr, 8);

    print(arr, 8);
    cout << endl;

    print(brr, 5);

    reverse(brr, 5);

    print(brr, 5);
    cout << endl;
    

    return 0;
}