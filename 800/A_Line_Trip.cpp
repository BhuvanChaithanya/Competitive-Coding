#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i= 0; i<n; i++)
        {
            cin>>arr[i];
        }        
        int res = max(arr[0], 2*(x-arr[n-1]));
        for (int j = 1; j <n; j++)
        {
            res = max(res, arr[j] - arr[j-1]);
        }
        cout<< res<<'\n';
    }
}