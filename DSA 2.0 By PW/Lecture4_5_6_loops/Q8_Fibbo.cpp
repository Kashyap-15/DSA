#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 1;
    int position;
    int nthFibbo;
    cout << "Enter a Position on which you want that fibbo number :";
    cin >> position;

    if (position < 0)
    {
        cout << "Please Enter the Positive Number : ";
    }
    else if (position == 1 || position == 2)
    {
        nthFibbo = 1;
        cout << a << " " << b << " ";
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 3; i <= position; i++)
        {
            nthFibbo = a + b;
            a = b;
            b = nthFibbo;
            cout << nthFibbo << " ";
        }
    }
    return 0;
}