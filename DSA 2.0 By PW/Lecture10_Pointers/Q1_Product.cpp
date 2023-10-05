#include<iostream>
using namespace std;
void product(int *p1,int *p2){
    int ans=((*p1)*(*p2));
    cout<<ans;
}

int main(){
    int a,b;
    cout<<"Enter the number A nad B :";
    cin>>a>>b;
    product(&a,&b); //Pass by Reference
    return 0;
}