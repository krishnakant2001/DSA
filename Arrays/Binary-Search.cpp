//Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    // int mid = (start + end)/2;
    int mid = (end - start)/2 + start;

    while(start <= end){

        if(key == arr[mid]){
            return mid;
        }
        //go to right part
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        //update mid
        mid = (end - start)/2 + start;

    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 6);
    int oddIndex = binarySearch(odd, 5, 14);

    cout << evenIndex << endl;
    cout << oddIndex << endl;


    return 0;
}