#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of a Array :";
    cin>>n;
    int arr[n];
    for (int i = 0; i <= n-1; i++)
    {
        cin>>arr[i];
    }
    int Smallest=INT_MAX;
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]<Smallest)
        {
            Smallest=arr[i];
        }
    } 
    cout<<"Minimum Value is : "<<Smallest;
    return 0;
}