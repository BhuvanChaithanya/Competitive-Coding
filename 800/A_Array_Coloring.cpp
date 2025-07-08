#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    for (int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int count = 0;
        for(int i=0; i<n;i++)
        {
            int temp;
            cin>> temp;
            if (temp%2 ==1)
            {
                count += 1;
            }

        }
        if (count%2 == 0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout <<"NO"<<"\n";
                }

    }
}