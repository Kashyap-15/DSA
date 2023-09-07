#include<iostream>
using namespace std;
int main(){
    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl; // here 1 is char so it will take ascii vlaue of it.
    return 0;
}
// output is 1 and 49