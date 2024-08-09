/*
Write a program to print the names of students by creating a Student class.
If no name is passed while creating an object of the Student class,
then the name should be "Unknown", otherwise the name should be equal
to the String value passed while creating the object of the Student class
*/

#include <iostream>
#include <string>
using namespace std;

class student
{
    string s;

public:
    student()
    {
        s = "unknown";
    }
    student(string v1)
    {
        s = v1;
    }
    void disp()
    {
        cout << "The name of the student is " << s << endl;
    }
};

int main()
{
    student m1, m2("R.M");
    m1.disp();
    m2.disp();
    return 0;
}