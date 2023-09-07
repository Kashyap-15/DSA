#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the Marks for A : ";
    cin >> a;
    cout << "Enter the Marks for B : ";
    cin >> b;
    cout << "Enter the Marks for C : ";
    cin >> c;
    if (a < c && a < b)
    {
        cout << "Student A Scored Least";
    }
    else if (b < c && b < a)
    {
        cout << "Student B Scored Least";
    }
    else if (a == b && b == c)
    {
        cout << "All Student Scored same";
    }
    else
    {
        cout << "Student C Scored Least";
    }

    return 0;
}