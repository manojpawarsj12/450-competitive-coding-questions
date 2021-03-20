//Move all the negative elements to one side of the array
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
    int j = 0, temp;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;

    /*
o/p
6
6 -6 5 -5 4 -4

-6
-5
-4
6
4
5*/
}