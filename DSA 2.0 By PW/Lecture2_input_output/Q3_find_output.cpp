#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y; // 10 20
    x += y;        // 30
    x -= y;        // 10
    x %= y;        // 10
    cout << x;
    return 0;
}