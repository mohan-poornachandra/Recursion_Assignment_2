#include<iostream>
using namespace std;
void PrintElements(int arr[], int n)
{
    if(n<=0) return;
    cout<<arr[n-1]<<" ";
    return PrintElements(arr,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    PrintElements(arr,n);
}