#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

class Teacher : public Person
{
public:
    string subject;

    Teacher(string name, int age, string subject) : Person(name, age)
    {
        this->subject = subject;
    }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "subject : " << subject << endl;
    }
};

int main()
{
    Teacher t1("Puneeth", 20, "Maths");
    t1.getInfo();
    Student s1("Alice", 20, 98);
    s1.getInfo();
    return 0;
}