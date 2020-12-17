#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long arr[3];
        long long sum=0;
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr, arr+3);
        int a=0;
        if(arr[0]<(sum+8)/9)
            cout<<"NO";
        else if(sum%9==0)
            cout<<"YES";
        else
        {
            cout<<"NO";
        }
        cout<<endl;
        
        
    }
}