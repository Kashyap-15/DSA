#include <iostream>
using namespace std;
int main()
{
    int a = 4, n;
    cout << "Enter the Nth term for AP : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        a = a + 3;
    }
    return 0;
}