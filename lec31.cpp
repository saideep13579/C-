//   The contructor overloading

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int v1)
    {
        a = v1;
        b = 0;
    }

    void printdata()
    {
        cout << "the complex number is " << a << " + " << b << " i " << endl;
    }
};
int main()
{
    Complex c1, c2(5); // we can do like this also
    c1.printdata();

    // Complex c2(5);
    c2.printdata();

    Complex c3(5, 6);
    c3.printdata();
    return 0;
}