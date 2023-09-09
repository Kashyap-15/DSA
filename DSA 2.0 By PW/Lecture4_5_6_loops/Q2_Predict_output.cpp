#include <iostream>
using namespace std;
int main()
{
    int t = 10;
    while (t /= 2)  //t=t/2
    {
        cout << "Hello" << endl; //will execute for 3 times
    }
    return 0;
}

// till t becomes 0 it will run
// hello
// hello
// hello