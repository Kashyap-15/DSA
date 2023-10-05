#include<iostream>
using namespace std;

void square(int n){
    for (int i = 1; i <= n; i++)
    {
    cout<<"Square of "<<i<<" is :"<<i*i<<endl;
    }
}

int main(){
    int n;
    cout<<"Print the number till you want the square :";
    cin>>n;
    square(n);
    return 0;
}