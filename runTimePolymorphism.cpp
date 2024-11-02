#include <iostream>
using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "This is Parent class" << endl;
    }
};

class Child : public Parent
{
public:
    void show()
    {
        cout << "This is Child Class" << endl;
    }
};

int main()
{
    Parent p1;
    Child c1;
    p1.show();
    c1.show();
    return 0;
}