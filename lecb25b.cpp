//        objects used as the function arguments

#include <iostream>

using namespace std;

class comp
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdataBySum(comp o1, comp o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printdata(void)
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    comp c1, c2, c3;
    c1.setdata(1, 2);
    c1.printdata();

    c2.setdata(3, 4);
    c2.printdata();

    c3.setdataBySum(c1, c2);
    c3.printdata();

    return 0;
}