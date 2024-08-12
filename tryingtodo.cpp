
#include <iostream>
using namespace std;

int num[8];
void reversenum()
{
    //  for (int i = 0; i <= sizeof(num); i++)
    //  {
    //      cout << "the number is " << num[i];
    //  }
    for (int j = sizeof(num); j > 0; j--)
    {
        cout << "the number after the reversing is " << num[j];
    }
}
int main()
{

    cout << "enter the decimal number ";
    cin >> num[8];
    reversenum();
    return 0;
}