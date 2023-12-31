#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int n){

    for(int i=0; i<n; i=i+2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int even[] = {5,2,9,4,7,6,1,0};

    int odd[] = {11, 33, 9, 76, 43};

    cout << endl;
    printArray(even, 8);
    swapAlternate(even, 8);
    printArray(even, 8);

    cout << endl;
    printArray(odd, 5);
    swapAlternate(odd, 5);
    printArray(odd, 5);


    return 0;
}