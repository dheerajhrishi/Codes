#include <bits/stdc++.h>
#include <list>
#include <iterator>
using namespace std;
void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); it++)
    {
        cout << "  " << *it;
    }
    cout << "\n";
}
int main()
{
    list<int> glist1, glist2;
    for (int i = 0; i < 10; i++)
    {
        glist1.push_back(i * 2);
        glist2.push_back(i * 3);
    }
    cout << "\n List 1 (glist1) is  : ";
    showlist(glist1);
    cout << "\n List 2 (glist2) is  : ";
    showlist(glist2);
    cout << "\n glist1.front() = " << glist1.front();
    cout << "\n glist2.front() = " << glist2.front();

    cout << " \nglist1 pop_front() ";
    glist1.pop_front();
    showlist(glist1);

    cout << " \nglist2 pop_front() ";
    glist2.pop_front();
    showlist(glist2);

    cout << "\n glist1.reverse() = ";
    glist1.reverse();
    showlist(glist1);

    cout << "\n glist1.reverse() = ";
    glist2.reverse();
    showlist(glist2);

    cout << "\n shorting of the glist's = ";
    glist1.sort();
    showlist(glist1);

    cout << "\n shorting of the glist's = ";
    glist2.sort();
    showlist(glist2);

    cout<<"\n Empty or not : ";
    
    s
    return 0;
}