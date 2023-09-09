#include <iostream>
using namespace std;
int main()
{
    int num, count;
    int sum = 0;
    cout << "Enter a Number : ";
    cin >> num;
    while (num > 0)
    {
        count = num % 10;
        if (count % 2 == 0)
        {
            sum += count;
        }
        num = num / 10;
    }
    cout << "Sum of even numbers is :" << sum;
    return 0;
}