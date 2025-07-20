#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    while (t--)
    {
    int n;
    cin>>n;

    int a[n];
    int count1 = 0;
    int count_1 = 0;
    for (int i = 0; i<n; i++)
    {
        cin >>a[i];
        if (a[i] == 1)
        {
            count1++;
        }
        else
        {
            count_1++;
        }
    }
    int res = 0;
    if (count_1 > count1)
    res += ceil((count_1 - count1)/(double)2);

    if ((count_1+res)%2 !=0)
    {
        res += 1;
    }
    cout <<res<<endl;
    }
}