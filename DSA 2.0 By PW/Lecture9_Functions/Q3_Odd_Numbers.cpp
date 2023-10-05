#include<iostream>
using namespace std;
void oddNum(int a, int b){
    for (int i = a; i <b; i++)
    {
        if (i%2!=0)
        {
        cout<<"Odd Number :"<< i<<endl;
        }
    }
    
}
int main(){
    int a,b;
    cout<<"Enter the number A :";
    cin>>a;
    cout<<"Enter the number B :";
    cin>>b;
    oddNum(min(a,b),max(a,b));
    return 0;
}