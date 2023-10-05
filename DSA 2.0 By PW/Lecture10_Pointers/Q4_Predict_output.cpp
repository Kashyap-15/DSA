#include<iostream>
using namespace std;
int main(){
    int a = 15, b = 20;
    int *ptr = &a; // a -> ptr
    int *ptr2 = &b; // b -> ptr2
    *ptr = *ptr2; // a -> b
    return 0;
}
// ptr now points to b