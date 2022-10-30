#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    friend void distance(Point, Point);
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
void distance(Point a, Point b)
{
    float xdist = a.x - b.x;
    float ydist = a.y - b.y;
    double dist = sqrt((xdist * xdist) - (ydist * ydist));
    cout << "The distance b/w points is " << dist << endl;
}

int main()
{

    Point p(0,1);
    p.displayPoint();

    Point q(0,6);
    q.displayPoint();

    distance(p, q);

    return 0;
}