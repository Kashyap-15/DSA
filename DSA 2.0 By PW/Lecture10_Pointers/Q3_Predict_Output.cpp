#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    int *ptr = &a; //*ptr stored with a varible's address
    b = *ptr + 1; //b = a+1
    ptr = &b; // 
    cout << *ptr << " "<<a<<" "<< b;
    return 0;
}

// Output is 11 10 11