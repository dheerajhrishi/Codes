#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x)
{

    int first = 0, last = n, mid = 0;

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (arr[mid] == x)
        {
            return mid+1;
        }
        else if (arr[mid] > x)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << binarySearch(arr, num, key);

    return 0;
}