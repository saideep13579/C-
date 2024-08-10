#include <iostream>

using namespace std;

class sai
{
private:
    int a, b;

public:
    int c, d, e;
    void disp(int a, int b);
    void disp(int c, int d, int e)
    {
        cout << "c= " << c << endl;
        cout << "d= " << d << endl;
        cout << "e= " << e << endl;
    }
};

void sai::disp(int a, int b)
{
    cout << "value of a " << a << endl;
    cout << "value of b " << b << endl;
}
int main()
{
    sai obj;
    obj.disp(5, 6, 7);
    obj.disp(9, 8);

    return 0;
}