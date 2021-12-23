#include <bits/stdc++.h>
using namespace std;

void search(vector<int> arr, int searchElement)
{
    int left = 0;
    int length = arr.size();
    int position = -1;
    int right = length - 1;

    for (left = 0; left <= right;)
    {
        if (arr[left] == searchElement)
        {
            position = left;
            cout << "Element found in array at "
                 << position + 1 << " position with "
                 << left + 1 << " Attempt";

            break;
        }

        if (arr[right] == searchElement)
        {
            position = right;
            cout << "Element found in Array at "
                 << position + 1 << " Position with "
                 << length - right << " Attempt";

            break;
        }
    }

    left++;
    right--;

    if (position == -1)
        cout << "Not found in Array with "
             << left << " Attempt";
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    int searchElement = 5;
    search(arr, searchElement);
}