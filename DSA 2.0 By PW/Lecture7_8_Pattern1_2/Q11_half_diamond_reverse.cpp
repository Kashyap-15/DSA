//     *
//    **
//   ***
//  ****
//   ***
//    **
//     *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter No of Rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l <= i + 1; l++)
        {
            cout << " ";
        }
        for (int m = 1; m <= n - i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}