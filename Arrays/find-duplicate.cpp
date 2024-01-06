//You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

#include <bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int n){

    int ans = 0;

    //xor with all elements of given array
    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    //xor with all 1 to N-1
    for(int i=1; i<n; i++){
        ans = ans^i;
    }

    return ans;
}
int main()
{
    int arr[9] = {8, 7, 2, 5, 4, 7, 1, 3, 6};

    cout << findDuplicate(arr, 9) << endl;
    return 0;
}