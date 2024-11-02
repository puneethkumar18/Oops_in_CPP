#include <iostream>
using namespace std;

class Shape // Abstraction
{
public:
    virtual void draw() = 0; // pure virtul function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle \n"
             << endl;
    }
};
int main()
{
    Shape *c1 = new Circle;

    c1->draw();
    return 0;
}