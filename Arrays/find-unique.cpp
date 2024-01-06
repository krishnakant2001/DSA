#include <bits/stdc++.h>
using namespace std;
int findUnique(int arr[], int n)
{

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}
int main()
{
    int arr[] = {2, 3, 1, 6, 3, 6, 2};
    int n = 7;

    // approach : XOR operator

    int ans = findUnique(arr, n);
    cout << ans << endl;

    return 0;
}