//find Largest sum contiguous Subarray [V. IMP]

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, i, mm, cc;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mm = arr[0];
    cc = arr[0];
    for (int i = 0; i < n; i++)
    {
        cc = max(cc, cc + arr[i]);
        mm = max(mm, cc);
    }
    cout << mm;
    return 0;
}