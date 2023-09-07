#include<iostream>
using namespace std;
int main(){
    int a=3,n;
    cout<<"Enter the Nth term for GP :";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<a<<endl;
        a=a*4;
    }
    
    return 0;
}