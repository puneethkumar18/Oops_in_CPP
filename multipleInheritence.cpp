#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->age = age;
        this->name = name;
    }
    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
    }
};

class Boy
{
public:
    string gender;
    Boy(string gender)
    {
        this->gender = gender;
    }
    void getInfo()
    {
        cout << "gender : " << gender << endl;
    }
};

class Student : public Person, public Boy
{
public:
    int rollno;
    Student(string name, int age, string gender, int rollno) : Person(name, age), Boy(gender)
    {
        this->rollno = rollno;
    }

    void printInfo()
    {
        Person::getInfo();
        Boy::getInfo();
        cout << "rollno : " << rollno << endl;
    }
};

int main()
{
    Student s1("Puneeth", 20, "Male", 64);
    s1.printInfo();
    return 0;
}