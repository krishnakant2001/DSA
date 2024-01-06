//maximum and minimum in an Array
#include <bits/stdc++.h>
using namespace std;
int getMax(int arr[], int n){

    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        maxi = max(maxi, arr[i]);
    }

    return maxi;
}
int getMin(int arr[], int n){

    int mini = INT_MAX;

    for(int i=0; i<n; i++){
        mini = min(mini, arr[i]);
    }

    return mini;
}
int main()
{
    int arr[] = {3,5,4,1,9};
    int brr[] = {22,14,8,17,35,3};


    cout << "Maximum is " << getMax(arr, 5) << endl;
    cout << "Minimum is " << getMin(arr, 5) << endl;

    cout << "Maximum is " << getMax(brr, 6) << endl;
    cout << "Minimum is " << getMin(brr, 6) << endl;


    return 0;
}