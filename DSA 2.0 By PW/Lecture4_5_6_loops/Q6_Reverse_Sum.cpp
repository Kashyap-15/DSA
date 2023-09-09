#include <iostream>
using namespace std;
int main()
{
    int num;
    int last_digit = 1;
    int reverse = 0;
    int sum = 0;
    cout << "Enter a Number : ";
    cin >> num;
    int copy_num = num;
    while (num > 0)
    {
        last_digit = num % 10;
        reverse *= 10;
        reverse += last_digit;
        num = num / 10;
    }
    sum = reverse + copy_num;
    cout << "Sum of reverse numbers is :" << sum << endl;
    return 0;
}