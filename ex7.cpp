/*
Create a class named 'Rectangle' with two data members- length and breadth and
a function to calculate the area which is 'length*breadth'. The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas
*/

#include <iostream>
using namespace std;

class rectangle
{
    int len, bre;

public:
    rectangle()
    {
        len = 0;
        bre = 0;
    }
    rectangle(int v1, int v2)
    {
        len = v1;
        bre = v2;
    }
    rectangle(int v1)
    {
        len = v1;
        bre = v1;
    }
    void area()
    {
        int ar = len * bre;
        cout << "The area of the rectangle is " << ar << endl;
    }
};

int main()
{
    rectangle r1, r2(5), r3(5, 6);
    r1.area();
    r2.area();
    r3.area();

    return 0;
}