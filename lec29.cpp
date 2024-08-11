//   Constructor

#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);

    void printdata()
    {
        cout << "the complex number is " << a << " = " << b << " i " << endl;
    }
};

Complex ::Complex(void)
{
    a = 5;
    b = 6;
    cout << "hello" << endl;
}

int main()
{
    Complex c;
    c.printdata();
    return 0;
}

// Characteristise of Constructor

/*
1. it should be declared in public section of class
2. they are automatically invoked as the creation of class
3. they cannot return values and cant have return type
4. they have default arguments
5. we cant refer to their adderess.
*/