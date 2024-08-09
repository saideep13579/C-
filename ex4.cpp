
/*
Write a program to print the area of a rectangle by creating a class named 'Area'
 having two functions. First function named as 'setDim' takes the length and breadth
  of the rectangle as parameters and the second function named as 'getArea' returns
   the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.
*/
#include <iostream>

using namespace std;

class area
{
public:
    int a, b;
    void setDim(void);
    void getArea(void);
};

void area::setDim(void)
{

    cout << "Enter the value of length " << endl;
    cin >> a;
    cout << "Enter the value of breadth " << endl;
    cin >> b;
}

void area::getArea(void)
{
    int ar = a * b;
    cout << "Area of the rectangle is " << ar << endl;
}
int main()
{
    area a;
    a.setDim();
    a.getArea();
    return 0;
}