#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter First Num : ";
    cin >> a;
    cout << "Enter Second Num : ";
    cin >> b;
    if (a > b)
    {
        cout << a << " is Greatest" << endl;
    }
    else
    {
        cout << b << " is Greatest" << endl;
    }
    return 0;
}