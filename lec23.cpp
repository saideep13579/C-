//           memory allocation and using array

#include <iostream>

using namespace std;

class Shop
{
    int itemId[100];
    int itemPrize[100];
    int counter;

public:
    void inItcounter(void) // without counter=0 we get the garbage value of counter .
    {
        counter = 0;
    }
    void setPrize(void);
    void display(void);
};

void Shop::setPrize()
{
    cout << "Enter id no. " << endl;
    cin >> itemId[counter];
    cout << "Enter prize  " << endl;
    cin >> itemPrize[counter];
    counter++;
}

void Shop::display()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the id no. of item " << itemId[i] << " and prize is " << itemPrize[i] << endl;
    }
}
int main()
{
    Shop morya;
    morya.inItcounter();
    morya.setPrize();
    morya.setPrize();
    morya.setPrize();
    morya.display();
    return 0;
}