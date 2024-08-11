//    Dynamic initilization of object using constructor

#include <iostream>

using namespace std;

class BankD
{
    int principal;
    int years;
    float intrestRate;
    float returnValue;

public:
    BankD()
    {
    }
    BankD(int p, int y, float r)
    {
        principal = p;
        years = y;
        intrestRate = r;
        returnValue = principal;
        for (int i = 0; i < y; i++)
        {
            returnValue = returnValue * (1 + intrestRate);
        }
    }
    BankD(int p, int y, int r);
    void show();
};

BankD ::BankD(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + intrestRate);
    }
}

void BankD ::show()
{
    cout << "The amount you invested in our bank is "
         << principal << " for " << years << "years and the return amount is "
         << returnValue << endl;
}

int main()
{
    BankD bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Here the r is for fractional value and R is for integer." << endl;

    cout << "enter the value of p , y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankD(p, y, r);
    bd1.show();

    cout << "enter the value of p , y and R" << endl;
    cin >> p >> y >> R;
    bd2 = BankD(p, y, R);
    bd2.show();

    return 0;
}