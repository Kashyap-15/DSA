#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements of a Array :";
    cin >> n;
    int arr[n];
    bool flag = false;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != i + 1)
        {
            flag = true;
            cout << i + 1 << endl;
            break;
        }
    }
    if (flag == false)
        cout << "There was no missing element";
    else
        cout << "There are missing elemnt";
    return 0;
}