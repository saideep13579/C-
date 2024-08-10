//      friends function in class        " friend return_type function_name (arguments) "
/*
propertics of friends function

1. not in the scope of class
2. thats why it can't be called form object of class
3. can be declared inside public or private
*/

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    friend Complex sumcomplex(Complex o1, Complex o2); //  here the Complex is return type
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printdata()
    {
        cout << "Your complex number is " << a << " + " << b << " i " << endl;
    }
};

Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setdata(3, 5);
    c1.printdata();

    c2.setdata(6, 7);
    c2.printdata();

    sum = sumcomplex(c1, c2);
    sum.printdata();
    return 0;
}