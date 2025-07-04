#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n;
    cin >>n;
    int res = INT_MAX;
    for (int i =0; i<n; i++)
    {
        int temp;
        cin >> temp;
        res = min(res, abs(temp));
    }

    cout<<res<<'\n';
    
}