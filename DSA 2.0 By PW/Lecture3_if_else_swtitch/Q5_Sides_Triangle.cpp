#include <iostream>
using namespace std;
int main()
{
    float s1, s2, s3;
    cout << "Enter the First side of Tragnle : ";
    cin >> s1;
    cout << "Enter the Second side of Tragnle : ";
    cin >> s2;
    cout << "Enter the Third side of Tragnle : ";
    cin >> s3;
    if (s1 == s2 && s1 == s3 && s3 == s2)
    {
        cout << "This Triangle is Equilateral Triagnle";
    }
    else if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        cout << "This Triangle is Isosceles Triagnle";
    }
    else
    {
        cout << "This Triangle is Scalene Triagnle";
    }
    return 0;
}