#include <iostream>

using namespace std;

class triangle
{
public:
    void area(int a, int b, int c);
    void perim(int d, int e, int f);
};

void triangle::area(int a, int b, int c)
{
    int ar = a * b * c;
    cout << "the area of triangle is " << ar << endl;
}
void triangle::perim(int d, int e, int f)
{
    int per = d + e + f;
    cout << "the perimeter of triangle is " << per << endl;
}
int main()
{
    triangle t;
    t.area(3, 4, 5);
    t.perim(3, 4, 5);
    return 0;
}