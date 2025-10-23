#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        vector<long long> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            b[i] =ceil(log10(a[i]));
        }

        sort(b.begin(), b.end());

        long long count = 0;
        for (int i = 0; i<n; i++)
        {
            if (b[i] == 0){
                continue;
            }
            else
            {
                if(b[i]+count < c)
                {
                    count+= 1;
                }
            }
        }
        long long res = n - count;

        cout<<res<<endl;
    }
}
