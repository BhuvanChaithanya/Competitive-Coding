#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >>n;
        int a[n];
        int total = 0;
        for (int i = 0; i<n; i++)
        {
            cin >>a[i];
            if (a[i] == 2){
                total++;
            }
        }
        int count =0;
        int flag = true;
        for (int i =1; i<n; i ++)
        {
            if (a[i-1] == 2)
            {
                count++;
            }
            if (count == total-count){
                cout<<i<<endl;
                flag = false;
                break;
            }
        }
        if (flag){
            cout<<-1<<endl;
        }
    }
}