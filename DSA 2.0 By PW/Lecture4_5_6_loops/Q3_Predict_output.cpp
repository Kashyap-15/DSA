#include <iostream>
using namespace std;
int main()
{
    for (int x = 1; x * x <= 10; x++)// because of condidtion it will not run for 10 times
        cout << "In for loop" << endl;
    return 0;
}

//it will run till x*x = 9
// In for loop
// In for loop
// In for loop