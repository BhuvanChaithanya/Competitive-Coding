#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i<n;i++){
        cin >> a[i];
    }
    int ans = INT_MIN;
    
    for (int i = 0; i<n; i++){
        ans = max(a[i], ans);
    }
    cout << ans <<endl;

    return 0;
}