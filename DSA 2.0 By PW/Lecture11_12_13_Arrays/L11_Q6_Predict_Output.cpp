#include<iostream>
using namespace std;
int main(){
    int sub[50], i ;
    for ( i = 0 ; i <= 48 ; i++ ) ; //loop terminates after 48 with 0 body
    {
        sub[i] = i ;
        cout<<sub[i]<<endl; 
    }
    return 0;
}

// Output ---> 49