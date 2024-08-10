//      making individual function of other class as friend
//     making other whole class as friend

#include <iostream>

using namespace std;

class Complex;
class calculator
{
public:
    int add(int c, int d)
    {
        return (c + d);
    }

    int sumRealcomplex(Complex o1, Complex o2);
    int sumImagcomplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;
    // we can use this when we wants to call the function individually

    // friend int calculator ::sumRealcomplex(Complex, Complex);
    // friend int calculator ::sumImagcomplex(Complex, Complex);

    friend class calculator; // we use this when we make whole  other class friend

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printdata()
    {
        cout << "the complex number is " << a << " + " << b << " i " << endl;
    }
};

int calculator::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int calculator::sumImagcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setdata(3, 5);
    o1.printdata();

    o2.setdata(6, 9);
    o2.printdata();

    calculator cal;
    int res = cal.sumRealcomplex(o1, o2);
    cout << "the sum of the real of complex number is " << res << endl;
    int resc = cal.sumImagcomplex(o1, o2);
    cout << "the sum of the imaginay of complex number is " << resc << endl;

    return 0;
}