#include<iostream>
using namespace std;
int main(){
    for (int i = 1; i < 500; i++)
    {
        int fix_num=i;
        int cubesum = 0;
        while (fix_num>0)
        {
            int last_digit = fix_num%10;
            cubesum += (last_digit*last_digit*last_digit);
            fix_num/=10; 
        }
        if (i==cubesum) cout<<cubesum<<endl;    
    }
    return 0;
}