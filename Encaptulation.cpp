#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
private:
    string geeekName;
    int geekRoll;
    int geekAge;

public:
    int getAge()
    {
        return geekAge;
    }

    string getname()
    {
        return geeekName;
    }

    int getRoll()
    {
        return geekRoll;
    }

    void setAge(int newAge)
    {
        geekAge = newAge;
    }

    void setName(string newName)
    {
        geeekName = newName;
    }

    void setRoll(int newRoll)
    {
        geekRoll = newRoll;
    }
};

int main()
{
    Encapsulation obj;
    obj.setName("Dheeraj");
    obj.setAge(20);
    obj.setRoll(07);

    cout << "geek's name : " << obj.getname() << endl;
    cout << "geek's Age : " << obj.getAge() << endl;
    cout << "Geek's Roll : " << obj.getRoll() << endl;

    return 0;
}