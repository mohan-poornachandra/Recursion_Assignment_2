#include<iostream>
#include<vector>
using namespace std;

int Search(int arr[], int ele,int n)
{
    if(n<0) return -1;
    if(arr[n]==ele) return n;
    else return Search(arr,ele,n-1);

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(int);
    int ele;
    cout<<"Enter search element: ";
    cin>>ele;
    cout<<"Element is at: "<<Search(arr,ele,n-1);
}