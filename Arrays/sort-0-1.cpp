// sort 0 and 1

#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort_0_1(int arr[], int n)
{
    // two pointer approach
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
        else if (arr[s] == 0)
        {
            s++;
        }
        else if (arr[e] == 1)
        {
            e--;
        }
    }
}
int main()
{
    int arr[] = {0, 1, 1, 1, 0, 1, 1, 1, 0};
    int n = 9;

    print(arr, n);

    sort_0_1(arr, n);

    print(arr, n);

    return 0;
}