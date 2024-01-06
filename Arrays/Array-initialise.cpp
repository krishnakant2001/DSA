#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
}
int main()
{
    //initialising
    int number[10];

    //accessing the number
    cout << number[9] << endl;

    int second[3] = {5, 7, 11};
    cout << second[2] << endl;

    int third[15] = {2, 3};
    //all becomes zero after 2 values

    printArr(third, 15);

    int fourth[10] = {1};
    printArr(fourth, 10);


    cout << "Everything is Fine" << endl;
    return 0;
}