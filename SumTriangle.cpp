// [5, 4, 3, 2, 1]
// [9, 7, 5, 3]
// [16, 12, 8]
// [28, 20]
// [48]
#include<iostream>
#include<vector>
using namespace std;

int SumTriangle(vector<int> arr)
{
    if(arr.size()==1) return arr[0];
    else{
       
        vector<int> ans;
        for(int i=0;i<arr.size()-1;i++)
        {
            ans.push_back(arr[i]+arr[i+1]);
        }
        return SumTriangle(ans);
    }

}

int main()
{
    vector<int> v={5, 4, 3, 2, 1};
    cout<<SumTriangle(v);
}