#include <iostream>

using namespace std;

class print
{
public:
    void disp(int a)
    {
        cout << "value of a is " << a << endl;
    }
    void disp(double b)
    {
        cout << "value of b is " << b << endl;
    }
};
int main()
{
    // float c = 6.548;
    print obj;
    obj.disp(5);
    obj.disp(5.5);
    //  cout << "value of c is" << c << endl;
    return 0;
}