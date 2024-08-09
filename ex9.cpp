/*
Create a class 'Student' with three data members which are name, age and address.
The constructor of the class assigns default values to name as "unknown", age as '0'
and address as "not available". It has two functions with the same name 'setInfo'.
First function has two parameters for name and age and assigns the same whereas the
second function takes has three parameters which are assigned to name, age and address
respectively. Print the name, age and address of 10 students.
*/

#include <iostream>
#include <string>

using namespace std;

class Student
{
    string name, address;
    int age;

public:
    Student()
    {
        name = "unknown";
        age = 0;
        address = "not available";
    }
    void selfinfo(string v1, int v2);
    void selfinfo(string v1, int v2, string v3);
};

void Student ::selfinfo(string v1, int v2)
{
    name = v1;
    age = v2;
    cout << endl
         << "name of the student is " << name
         << " and age is " << age << " and address is " << address;
}

void Student ::selfinfo(string v1, int v2, string v3)
{
    name = v1;
    age = v2;
    address = v3;
    cout << endl
         << "name of the student is " << name
         << " , age is " << age << " and address is " << address;
}

int main()
{
    Student s[10];
    s[1].selfinfo("saideep chougale", 19);
    s[2].selfinfo("saideep chougale", 19, "Borgaon");
    s[3].selfinfo("saideep chougale", 19, "kotoli");
    s[4].selfinfo("sai", 19);
    s[5].selfinfo("R.M", 19);
    s[6].selfinfo("sai", 19, "kolhapur");
    s[7].selfinfo("saideep chougale", 19, "new york");
    s[8].selfinfo("saideep chougale", 19, "paris");
    s[9].selfinfo("saideep chougale", 19, "france");
    s[10].selfinfo("saideep chougale", 19, "italy");
    return 0;
}
