#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n, k, x;
        cin>>n>>k>>x;

        if (x != 1)
        {
            cout<<"YES\n"<<n<<"\n";
            for(int i =0; i<n-1; i++)
            {
                cout<<"1 ";
            }
            cout<<"1"<<"\n";
        }
        else if (k>=2 && n%2 == 0 && x != 2)
        {
            cout<<"YES"<<"\n"<<n/2<<"\n";
            for( int i = 0; i<(n/2)-1; i++)
            {
                cout<<"2 ";
            }
            cout<<"2"<<"\n";
        }
        else if (k >=3 && x !=3)
        {
            cout<<"YES"<<"\n"<<n/2<<"\n";
            cout<<"3 ";
            for (int i =2; i<n/2; i++ )
            {
                cout<<"2 ";
            }
            cout<<"2";

        }

        else{
            cout<<"NO"<<"\n";
        }
        
    }
    return 0;
}