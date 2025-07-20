#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        int res = 0;
        int temp = 0;
        for (int i = 0; i<n; i++)
        {
            if (a[i]== 0)
            {
                temp ++;
                res = max(res, temp);
            }
            else
            {
                temp = 0;
            }
        }

        cout<<res<<"\n";
    }
}