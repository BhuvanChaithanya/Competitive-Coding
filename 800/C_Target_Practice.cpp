#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    
    for (int i = 0; i<t; i++ )
    {
    int res = 0;
    for (int i = 0; i<10; i++)
    {
        for (int j = 0; j<10; j++)
        {
            char temp; 
            cin >> temp;

            if (temp == 'X')
            {
                int r = i, c = j;

                if (r > 4)
                {
                    r = 9- r;

                }
                if (c > 4)
                {
                    c = 9 -c;
                }
                res += min(r+1,c+1);
            }
        }
    }

    cout<<res<<'\n';
}
    return 0;
}