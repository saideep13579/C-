//    Nesting of member function  --> function in function

#include <iostream>
#include <string>

using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bi(void);
    void disp(void);
    void ones_compl(void);
};

void binary::read()
{
    cout << "Enter the binary number" << endl;
    cin >> s;
}

void binary::chk_bi(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary::ones_compl()
{
    chk_bi(); // --> Nesting of member function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary::disp()
{
    cout << "displying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bi();
    b.disp();
    b.ones_compl();
    b.disp();

    return 0;
}