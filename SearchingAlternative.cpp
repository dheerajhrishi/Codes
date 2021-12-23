#include <bits/stdc++.h>
using namespace std;

void search(vector<int> a, int search_element)
{
    int left = 0;
    int length = a.size();
    int position = -1;
    int right = length - 1;
    for (left = 0; left <= right;)
    {
        if (a[left] == search_element)
        {
            position = left;
            cout << "Element founded in Arrat at "
                 << position + 1 << " position with "
                 << left + 1 << " Attempt";
            break;
        }

        if (a[right] == search_element)
        {
            position = right;
            cout << " Element found in Array at "
                 << position + 1 << " position with "
                 << length - right << " Attempt";
            break;
        }
        left++;
        right--;
    }

    if (position == -1)
    {
        cout << "Not found in Array with "
             << left << " Attempt";
    }
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6};
    int search_element = 5;
    search(arr, search_element);
}