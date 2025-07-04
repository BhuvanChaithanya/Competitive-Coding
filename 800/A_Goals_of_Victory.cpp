#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >>t;
    for (int i =0; i<t; i++)
    {
        int n;
        cin >>n;
        int sum = 0;
        for (int i=0; i<n-1; i++)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }

        cout<< 0 - sum <<endl;
    }
}