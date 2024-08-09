#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    void roll_no(int a);
    void phone_no(long long b);
    void address(string s);
};

void student::roll_no(int a)
{
    cout << " roll no.: " << a << endl;
}

void student::phone_no(long long b)
{
    cout << "phone no.: " << b << endl;
}

void student::address(string s)
{
    cout << "address : " << s << endl;
}
int main()
{
    student sam;
    student john;
    sam.roll_no(25);
    sam.phone_no(8448554545);
    sam.address("at post-borgaon");
    john.roll_no(54);
    john.phone_no(8546932965);
    john.address("at post-kotoli");
    return 0;
}