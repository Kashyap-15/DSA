#include<iostream>
using namespace std;
int main() { 
int a = 5, b, c ; // a=5
b = a = 15 ; // a==15 && b==15
c = a < 15 ; // c= 0 not assigned something.
cout << "a = " << a << ", b = " << b <<  ", c = "<< c ; 
	return 0;
}
// output is a=15,b=15 and c=0;
