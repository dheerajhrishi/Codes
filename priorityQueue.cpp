#include <iostream>
#include <queue>
using namespace std;

void showq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
int main()
{
    priority_queue<int> gquiz;
    gquiz.push(15);
    gquiz.push(80);
    gquiz.push(30);
    gquiz.push(70);
    gquiz.push(45);
    gquiz.push(90);
    gquiz.push(55);
    gquiz.push(60);

    cout << "The priority queue gquiz is : ";
    showq(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();

    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);

    return 0;
}