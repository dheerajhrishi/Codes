#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int start, int end, int key)
{
    int mid;
    if (end >= 1)
    {
        mid = (start + end) / 2;
    }
    if (a[mid] == key)
    {
        return mid;
    }
    if (a[mid] > key)
    {
        return binary_search(a, start, mid - 1, key);
    }
    if (a[mid < key])
    {
        return binary_search(a, mid + 1, end, key);
    }
    return -1;
}

int main()
{
    int num;
    cin >> num;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;
    int result = binary_search(a, 0, num - 1, key);
    (result == -1)

        ? cout << " Element is not present in aray"
        : cout << "Element is present in Array at index" << result;
}