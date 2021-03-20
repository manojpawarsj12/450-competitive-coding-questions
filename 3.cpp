//Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100], n, i;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
    for (i = 0; i < n; i++)
    {
        switch (arr[i])
        {
        case 0:
            cnt_0++;
            break;
        case 1:
            cnt_1++;
            break;
        case 2:
            cnt_2++;
            break;
        default:
            break;
        }
    }
    i = 0;
    while (cnt_0 > 0)
    {
        arr[i++] = 0;
        cnt_0--;
    }
    while (cnt_1 > 0)
    {
        arr[i++] = 1;
        cnt_1--;
    }
    while (cnt_2 > 0)
    {
        arr[i++] = 2;
        cnt_2--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}