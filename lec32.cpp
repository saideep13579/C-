// default arguments in constructor

#include <iostream>

using namespace std;

class simple
{
    int data1, data2;

public:
    simple(int a, int b = 7)
    {
        data1 = a;
        data2 = b;
    }

    void printdata()
    {
        cout << "Your value of data1 and data2 is " << data1 << " and " << data2 << endl;
    }
};
int main()
{
    simple s1(5, 6);
    s1.printdata();

    simple s2(5);
    s2.printdata();
    return 0;
}
