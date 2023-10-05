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
    int largest=INT_MIN;
    int Second_largest=INT_MIN;
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
    } 
    for (int i = 0; i <= n-1; i++)
    {
        if (arr[i]>Second_largest && arr[i]!=largest)
        {
            Second_largest=arr[i];
        }
        
    }
    cout<<"Largest Number is : "<<largest<<endl;
    cout<<"Second Largest Number is : "<<Second_largest;    
    return 0;
}