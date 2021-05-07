//Minimise the maximum difference between heights [V.IMP]
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, k, small, large;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    small = arr[0];
    large = arr[n - 1];
    for (int i = 1; i < n-1; i++)
    {
        
    }
    return 0;
}