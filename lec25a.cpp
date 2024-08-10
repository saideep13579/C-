//       array using as a object

#include <iostream>

using namespace std;

class company
{
    int id;

public:
    void setid(void) //  we make setid for the setting the value ......if we did not set it then compiler give us garbage value.
    {
        cout << "Enter the id " << endl;
        cin >> id;
    }

    void getid(void)
    {
        cout << "The id is " << id << endl;
    }
};

int main()
{
    company BD[4];
    for (int i = 0; i < 4; i++)
    {
        BD[i].setid();
        BD[i].getid();
    }

    return 0;
}
