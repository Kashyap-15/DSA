#include<iostream>
using namespace std;
void area(float r){
    float PI = 3.14;
    float area = PI*(r*r);
    cout<<"area of Cicle is : "<<area;
}
int main(){
    float n;
    cout<<"Enter the Radius of the circle :";
    cin>>n;
    area(n);
    return 0;
}