#include <iostream>
using namespace std;
int main()
{
    float x1, x2, x3, y1, y2, y3, slope1, slope2;
    cout << "Enter the First X and Y cordinates ";
    cin >> x1 >> y1;
    cout << "Enter the Second X and Y cordinates ";
    cin >> x2 >> y2;
    cout << "Enter the third X and Y cordinates ";
    cin >> x3 >> y3;

    // calculate the slope for to check on same straight line
    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        cout << "The given Cordinate are on the same straight line";
    }
    else
    {
        cout << "The given Cordinate are not on the straight line";
    }
    return 0;
}