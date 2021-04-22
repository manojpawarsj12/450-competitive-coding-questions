//Find the Union and Intersection of the two sorted arrays.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100], b[100], m, n, i;
    cin >> m >> n;
    map<int, int> mp;
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < m; i++)
    {
        mp.insert({a[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        mp.insert({b[i], i});
    }
    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << '\t' << i->first
             << '\t' << i->second << '\n';
    }
    set<int> hs;

    // Insert the elements of arr1[] to set S
    for (int i = 0; i < m; i++)
        hs.insert(a[i]);

    for (int i = 0; i < n; i++)

        // If element is present in set then
        // push it to vector V
        if (hs.find(b[i]) != hs.end())
            cout << b[i] << " ";
    return 0;
}
