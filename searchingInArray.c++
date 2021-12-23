#include <iostream>
using namespace std;

void searching(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "key is founded at " << i + 1 << "th place";
        }
    }
    
  
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

    for (int i = 0; i < num; i++)
    {
        cout << a[i] << "/t";
    }
    cout << endl;

    int pressKey;
    cin >> pressKey;

    searching(a, num, pressKey);

    return 0;
}