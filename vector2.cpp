#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;
    for (int i = 0; i <= 5; i++)
    {
        g1.push_back(i);
    }

    cout << " size:  " << g1.size();
    cout << " \ncapacity:  " << g1.capacity();
    cout << " \nMax_size:  " << g1.max_size();

    g1.resize(4);
    cout << " \nsize:  " << g1.size();
    if (g1.empty() == false)
    {
        cout << "\n vector is not empty ";
    }
    else
    {
        cout << "\n vector is empty";
    }
    g1.shrink_to_fit();
    cout << "\n Vector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
    {
        cout << *it << "  ";
    }
    return 0;
}