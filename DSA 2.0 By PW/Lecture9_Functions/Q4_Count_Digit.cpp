#include<iostream>
using namespace std;
void digit(int a){
    int b=a;
    int count =0;
    while (a>0)
    {
        int last_digit;
        last_digit = a%10;
        count++;
        cout<<"Square of "<<last_digit<<" is :"<<last_digit*last_digit<<endl;
        a=a/10;
    }
    cout<<"There was "<<count<<" Digit in the "<<b<<endl;
    
}
int main(){
    int a;
    cout<<"Enter a number to find its Digit :";
    cin>>a;
    digit(a);
    return 0;
}