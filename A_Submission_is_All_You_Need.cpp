#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> freq(101, 0); // Si can go up to 50
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int mex1 = 0, mex2 = 0;

        // First pass: reduce frequency once for each i < mex1
        while (freq[mex1] > 0) {
            freq[mex1]--;
            mex1++;
        }

        // Second pass: reduce frequency again for each i < mex2
        while (freq[mex2] > 0) {
            freq[mex2]--;
            mex2++;
        }

        cout << (mex1 + mex2) << endl;
    }
    return 0;
}
