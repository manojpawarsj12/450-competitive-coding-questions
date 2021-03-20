//Find the "Kth" max and min element of an array
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max << endl;
    return 0;
}