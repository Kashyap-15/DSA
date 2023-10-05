#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter No of Rows : ";
    cin >> n;
    for (int i = 1; i <= n+1; i++)  //n+1 because in question input is 4 as row.
    {
        int a=65;
        for (int j = 1; j <= i; j++)
        {
            if (i%2!=0)
            {
                cout<<j;
            }else
            {
                cout<<(char)a;
                a++;
            }
        }
        cout<<endl;
    }
    
    return 0;
}