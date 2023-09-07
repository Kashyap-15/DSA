#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter any character :";
    cin >> character;
    int num_Char = (int)character;
    if ((num_Char >= 97 && num_Char <= 122) || (num_Char >= 65 && num_Char <= 90))
    {
        cout << character << " is a Alphabet";
    }
    else if (num_Char > 48 && num_Char < 57)
    {
        cout << character << " is a Digit";
    }
    else
    {
        cout << character << " is a Special Character";
    }
    return 0;
}