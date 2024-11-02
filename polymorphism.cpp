#include <iostream>
using namespace std;

class Print
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }
    void show(char x)
    {
        cout << "char : " << x << endl;
    }
    void show(double x)
    {
        cout << "double : " << x << endl;
    }
    void show(string x)
    {
        cout << "string : " << x << endl;
    }

    void operator+(char q)
    {
        cout << "char : " << q << endl;
    }
};

int main()
{
    Print p;
    p.show(10);
    p.show(10.2);
    p.show('a');

    p.show("Puneeth");

    p + 'a';
    return 0;
}