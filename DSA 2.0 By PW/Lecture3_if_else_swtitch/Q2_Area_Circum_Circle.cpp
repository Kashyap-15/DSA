#include <iostream>
using namespace std;
int main()
{
    float r, area, circum;
    float PI = 3.14;
    cout << "Enter the Radius of the cirlce : ";
    cin >> r;
    area = PI * r * r;
    circum = 2 * PI * r;
    if (area > circum)
    {
        cout << "Yes, Area (" << area << ") is greater than Circumference (" << circum << ")";
    }
    else
    {
        cout << "No, Area(" << area << ") is not greater than Circumference (" << circum << ")";
    }
    return 0;
}