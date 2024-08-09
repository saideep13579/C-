//  creating a function which takes two points and compute the distance between them.

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    int x, y;

public:
    friend int dist(Point p1, Point p2);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    int printPoint()
    {
        cout << "the point is (" << x << " , " << y << ")" << endl;
    }
};

int dist(Point p1, Point p2)
{
    int c = (p1.x - p2.x) * (p1.x - p2.x);
    int d = (p1.y - p2.y) * (p1.y - p2.y);
    return (sqrt(c + d));
}

int main()
{
    Point p1(4, 5), p2(5, 6);
    p1.printPoint();
    p2.printPoint();

    int res = dist(p1, p2);
    cout << "the distance between points is " << res << endl;
    return 0;
}