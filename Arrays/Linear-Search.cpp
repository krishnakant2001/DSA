//Linear Search
#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int key){

    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;

}
int main()
{
    int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};

    cout << "Enter the value that you want to search in an array " << endl;
    int key;
    cin >> key;

    cout << search(arr, 8, key) << endl;

    return 0;
}