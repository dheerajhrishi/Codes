#include <bits/stdc++.h>
#include <stack>

using namespace std;
int main()
{

    stack<int> Stack;
    Stack.push(21);
    Stack.push(222);
    Stack.push(233);
    Stack.push(244);

    while (!Stack.empty())
    {
        cout << ' ' << Stack.top();
        Stack.pop();
    }
    cout << endl;
    Stack.push(25);

    while (!Stack.empty())
    {
        cout << ' ' << Stack.top();
        Stack.pop();
    }
    return 0;
}