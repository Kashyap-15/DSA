#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter a year to check weather it is a leap year or not :";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " is a Leap year";
    }
    else
    {
        cout << year << " is not a Leap year";
    }
    return 0;
}