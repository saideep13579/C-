// paramiterizied constructor

#include <iostream>

using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b);

    void printpoint()
    {
        cout << "the point is (" << x << " , " << y << ")" << endl;
    }
};

Point ::Point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    Point p(7, 8); // Implicit call
    p.printpoint();

    Point q = Point(5, 6); // Explicit call
    q.printpoint();
    return 0;
}