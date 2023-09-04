#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;  // user will give ‘x’ a value. 11
    int y,m;
    cout<<"Enter second number and value for taking modulus\n";
    cin>>y>>m;  // user will give ‘y’ a value 12 and m value also  5
    int Z= (x*y)%m;
    cout<<"Output is :"<<Z;
    return 0;
}
// output is 2