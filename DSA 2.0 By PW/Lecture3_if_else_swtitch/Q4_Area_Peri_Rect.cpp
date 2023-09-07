#include <iostream>
using namespace std;
int main()
{
    float w, b, area, perimeter;
    cout << "Enter the Width of the Rectangle :";
    cin >> w;
    cout << "Enter the Breath of the Rectangle :";
    cin >> b;
    area = w * b;
    perimeter = 2 * (w + b);
    if (area > perimeter)
    {
        cout << "Yes, Area (" << area << ") is greater than Circumference (" << perimeter << ")";
    }
    else
    {
        cout << "Yes, Area (" << area << ") is greater than Circumference (" << perimeter << ")";
    }
    return 0;
}
