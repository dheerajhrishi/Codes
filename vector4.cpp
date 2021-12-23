#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.assign(5, 10);
    cout << "The vector element is ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    v.push_back(15);
    int n = v.size();
    cout << " \n the last element is: " << v[n - 1];
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }

    v.pop_back();
    cout << "The elements of the vector is: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "  ";
    }
    v.insert(v.begin(),5);
    cout<<"\nThe firsrtr element of the vector is "<<v[0];
}