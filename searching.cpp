#include <iostream>
using namespace std;

void linearSearch(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << "the number " << x << " is at the position of " << i + 1<<endl;
        }
    }
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

    linearSearch(arr, num, key);
}