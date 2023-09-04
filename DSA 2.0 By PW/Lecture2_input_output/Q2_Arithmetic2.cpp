#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first number\n";
    cin>>x;  // user will give ‘x’ a value. 10
    int y;
    cout<<"Enter second number\n";
    cin>>y;  // user will give ‘y’ a value. 20
    cout<<(x!=y)<<" "<<(x>=y);
    return 0;
}

// output 1 0