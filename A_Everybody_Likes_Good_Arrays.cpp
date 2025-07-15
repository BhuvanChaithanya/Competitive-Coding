#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        vector<int> a;
        a.push_back(b[0]);
        
        for (int i = 1; i < n; i++) {
            if (b[i-1] > b[i]) {
                // Insert an element that's greater than b[i] but allows b[i] to be selected
                a.push_back(b[i] + 1);
            }
            a.push_back(b[i]);
        }
        
        cout << a.size() << "\n";
        for (int i = 0; i < a.size(); i++) {
            cout << a[i];
            if (i < a.size() - 1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
