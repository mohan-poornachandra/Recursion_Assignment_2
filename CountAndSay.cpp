#include<iostream>
#include<string>
using namespace std;

string CountAndSay(int n)
{
    if(n==1) return "1";
    else{
        string ans= CountAndSay(n-1);
        string cpy="";
            int freq=1;
            int n = ans.size();
            char ch=ans[0];
            for(int i=1;i<n;i++)
            {
                if(ch==ans[i]){
                    freq++;
                }
                else {    
                    cpy += (to_string(freq)+ch);
                    freq=1;
                    ch=ans[i];
                    
                }
            }
        cpy += (to_string(freq)+ch);
        return cpy;
    }

}

int main()
{
    int n;
    cout<<"Enter a no.:  "; 
    cin>>n;
    cout<<CountAndSay(n);
}