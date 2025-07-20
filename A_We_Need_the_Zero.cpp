#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        int x;
        long long a[n];
        for(int i = 0; i<n; i++)
        {
            cin >>a[i];
            if (a[i] != 0)
            {
                x ++;
            }
        }
        long long res= 0;
        for(int i = 0; i<n; i++)
        {
            res ^= a[i];
        }
        if (n%2 == 1){
            cout<<res<<endl;
        }
        else
        {
            if (res == 0)
            {
                cout<<res<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
}