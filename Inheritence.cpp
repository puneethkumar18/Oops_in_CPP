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

    Student(string name, int age, int rollno) : Person(name, age), rollno(rollno)
    {
    }
    virtual void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

class GraduateStudent : public Student
{
public:
    string graduation;
    string fieldOfResearch;

    GraduateStudent(string name, int age, int rollno, string graduation, string fieldOfResearch) : Student(name, age, rollno), graduation(graduation), fieldOfResearch(fieldOfResearch)
    {
    }

    void getInfo() override
    {
        cout << "graduation : " << graduation << endl;
        cout << "fieldOfResearch : " << fieldOfResearch << endl;
    }
};

int main()
{
    Student s1("puneethkumar", 20, 64);
    GraduateStudent g1("ramesh", 26, 98, "B.E", "AutoMobile Industry");

    s1.getInfo();

    g1.getInfo();
    return 0;
}