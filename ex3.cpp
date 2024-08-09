
/*
Print the sum, difference and product of two complex numbers by creating a
class named 'Complex' with separate functions for each operation whose real and imaginary parts are entered by the user.
*/

#include <iostream>

using namespace std;

class Complex
{
public:
    void setNum(void);
    void sum(void);
    void diff(void);
    void prod(void);
    int a, b, c, d;
};

void Complex::setNum(void)
{
    cout << "enter the real part of 1st no.:" << endl;
    cin >> a;
    cout << "enter the imaginary part of 1st no.:" << endl;
    cin >> b;
    cout << "your 1st complex no. :" << a << " + i" << b << endl;
    cout << "enter the real part of 2nd no.:" << endl;
    cin >> c;
    cout << "enter the imaginary part of 2nd no.:" << endl;
    cin >> d;
    cout << "your 2nd complex no. :" << c << " + i" << d << endl;
}
void Complex::sum(void)
{
    int p = a + c;
    int q = b + d;
    cout << "The sum is " << p << " + i" << q << endl;
}
void Complex::diff(void)
{
    int p = a - c;
    int q = b - d;
    cout << "The difference is " << p << " + i" << q << endl;
}
void Complex::prod(void)
{
    int p = a * c;
    int q = b * d;
    cout << "The product is " << p << " + i" << q << endl;
}
int main()
{
    Complex c;
    c.setNum();
    c.sum();
    c.diff();
    c.prod();
    return 0;
}