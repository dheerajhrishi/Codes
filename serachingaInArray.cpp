#include <bits/stdc++.h>
using namespace std;

int search(int a[], int num, int key)
{
    int i;
    for (i = 0; i < num; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
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
    int result = search(a, num, key);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}