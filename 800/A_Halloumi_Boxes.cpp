#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i =0; i <t; i++){
    
    int n, k;
    cin >> n;
    cin >>k;
    int a[n];
    for (int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    if (k>=2){
        cout<<"YES"<<endl;
    }
    else if (k<2)
    {   
        bool flag = false;
        for (int i = 1; i<n; i++)
        {
            if (a[i-1] > a[i])
            {   
                cout <<"NO"<<endl;
                flag = true;
                break;
            }

        }
        if (!flag){
        cout<<"YES"<<endl;}
    }
}}
