#include <iostream>
using namespace std;
int main()
{
    float x, y;
    cout << "Enter the X-Cordinate of point :";
    cin >> x;
    cout << "Enter the Y-Cordinate of point :";
    cin >> y;
    if (x == 0)
    {
        cout << "The Point (" << x << ", " << y << ")  is on X axis" << endl;
    }
    else if (y == 0)
    {
        cout << "The Point (" << x << ", " << y << ")  is on Y axis" << endl;
    }
    else if (x == 0 && y == 0)
    {
        cout << "The Point (" << x << ", " << y << ")  is at Origin" << endl;
    }
    else
    {
        cout << "The Point (" << x << ", " << y << ")  somewhere in the Quadrent" << endl;
    }
    return 0;
}