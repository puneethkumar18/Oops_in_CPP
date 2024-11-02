#include <iostream>
using namespace std;

class Teacher
{
public:
    // attributes/properties
    string *name;
    string dept;
    string subject;
    double salary;

    // constructor
    Teacher()
    {
        cout << "Constructor Called" << endl;
    }
    Teacher(string name)
    {
        this->name = &name;
    }

    // // deep copy
    // Teacher(Teacher &teacherObj)
    // {
    //     name = new string;
    //     *this->name = *teacherObj.name;
    //     dept = teacherObj.dept;
    //     subject = teacherObj.subject;
    //     salary = teacherObj.salary;
    // }

    // destructor
    ~Teacher()
    {
        cout << "Hi, I have Deleted Everthing!" << endl;
    }

    // methods/member functions
    void changeDeparment(string newDept)
    {
        this->dept = newDept;
    }
};

int main()
{
    Teacher t1("Puneeth");
    Teacher t2(t1);

    cout << "Teacher 1 -> " << *(t1.name) << endl;
    cout << "Teacher 2 -> " << *(t2.name) << endl;

    *(t2.name) = "Ramesh";
    cout << "Teacher 1 -> " << *(t1.name) << endl;
    cout << "Teacher 2 -> " << *(t2.name) << endl;

    return 0;
}