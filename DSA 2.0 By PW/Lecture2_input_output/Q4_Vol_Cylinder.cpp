#include <iostream>
using namespace std;
int main()
{
    float height, radius, volume;
    float PI = 3.14;
    cout << "Please enter the height of the cylinder :";
    cin >> height;
    cout << "Please enter the radius of the cylinder :";
    cin >> radius;
    volume = PI * radius * radius * height;
    cout << "Volume of Cylinder is : " << volume;
    return 0;
}