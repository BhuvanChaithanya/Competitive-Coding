#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i=0; i<t; i++)
    {
        int a,b,c;
        cin>> a>>b>>c;

        int abut = 0;
        int kbut = 0;
        
        abut += a+(c/2);
        if (c%2 ==1)
        {
            abut += 1;
        }
        kbut = b+(c/2);

        if (abut > kbut)
        {
            cout<<"First"<<'\n';
        }
        else{
            cout<<"Second"<<"\n";
        }

    }
    return 0;
}