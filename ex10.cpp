//  converting an decimal to  binary using friend function

#include <iostream>
using namespace std;

class decTobin
{
    int i = 0;

public:
    int binum[32];

    decTobin(int n)
    {
        while (n > 0)
        {
            binum[i] = n % 2;
            n = n / 2;
            i++;
        }
    }
    void show()
    {
        cout << "The conversion of decimal to binary is " << endl;
        for (int j = i - 1; j >= 0; j--)
        {
            cout << binum[j];
        }
    }
};

int main()
{
    int a;
    cout << "enter the decimal number ";
    cin >> a;
    decTobin db(a);
    // db = decTobin(4);
    db.show();
    return 0;
}