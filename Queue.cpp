#include <iostream>
#include <queue>
using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
    gquiz.push(40);
    gquiz.push(50);
    gquiz.push(60);

    cout << "The queue gquiz is : ";
    showq(gquiz);

    cout << "\n gqiz.size() : " << gquiz.size();
    cout << "\n gqiz.front() : " << gquiz.front();
    cout << "\n gqiz.back() : " << gquiz.back();

    cout << "\n gqiz.pop() : ";
    gquiz.pop();
    showq(gquiz);

    return 0;
}