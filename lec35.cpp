//  Destructor

#include <iostream>

using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function " << endl;
    cout << "we creating first object n1" << endl;

    num n1;
    {
        cout << "entring this block" << endl;
        cout << "creating other two objects" << endl;
        num n2, n3;

        cout << "exiting thia block" << endl;
    }
    cout << "end of the main" << endl;
    return 0;
}