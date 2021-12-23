#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    int m;
    while (l <= r)

        m = (l + r) / 2;

    if (a[m] == x)
    {
        return m;
    }
    if (a[m] < x)
    {
        l = m + 1;
    }
    else
    {
        r = m - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
                   : cout << "Element is present at index " << result;

    return 0;
}