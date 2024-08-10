//                 static variables & static function

#include <iostream>

using namespace std;

class employee
{
    int id;
    static int count; // this is the static variable

public:
    void setData(void)
    {
        cout << "Enter the id of employee " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "the id is " << id << " & the count of employee is " << count << endl;
    }

    static void getcount(void) //     this is the static function
    {
        cout << "THe value of count is" << count << endl;
    }
};

int employee::count; // we have to declare herethe the static variable

int main()
{
    employee sai, ram;
    sai.setData();
    sai.getData();
    employee::getcount();

    ram.setData();
    ram.getData();
    employee::getcount();
    return 0;
}