#include <iostream>
#include <string>

using namespace std;

class Crush
{
    string s;

public:
    Crush(string v1 = "kristan steward.")
    {
        s = v1;
    }

    void printdata()
    {
        cout << "The name of the My Crush is " << s << endl;
    }
};
int main()
{
    Crush c;
    c.printdata();
    return 0;
}