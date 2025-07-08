#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i =0; i<t; i++){
        int n;
        cin>>n;
        int a[n];
        for (int i =0; i<n;i++)
        {
            cin>>a[i];
        }
        int close = INT_MAX;
        bool flag = false;
        for (int i=1; i<n;i++)
        {   
            int val = a[i]-a[i-1];
            if (val < 0)
            {
                cout<<0<<'\n';
                flag = true;
                break;
            }
            close = min(close, val);
    
        }

        if (!flag)
        {
            cout<<(close/2)+1<<'\n';
        }
    }
}