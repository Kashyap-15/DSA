#include <iostream>
using namespace std;
int main()
{
    int x = 10; 
    int y = 0;
    while (x >= y)
    {
        x--;// 9-8-7-6-5-4
        y++;// 1-2-3-4-5-6
        cout << x << " " << y << endl;
    }
    return 0;
}

// output is below
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6