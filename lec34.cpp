//   Copy Constructor

#include <iostream>

using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    // when no copy constructor found compiler supplies its own constructor
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "The copy constructor invoked" << endl;
        a = obj.a;
    }
    void disp()
    {
        cout << "The number is " << a << endl;
    }
};

int main()
{
    Number x, y, z(50), z3;
    x.disp();
    y.disp();
    z.disp();

    Number z1(z); // copy constructor invoked
    z1.disp();

    Number z2 = x; // copy constructor invoked
    z2.disp();

    z3 = z; // copy constructor not invoked
    z3.disp();
    // z1 should exactly resemble the z or x or y
    return 0;
}