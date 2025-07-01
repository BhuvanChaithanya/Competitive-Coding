#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i<t; i++)
    {
        int n;
        cin >> n;
        char arr[n];
        int count = 0;
        for (int i = 0; i< n; i++)
        {
            cin >> arr[i];
            if (arr[i] == '.')
            {
                count += 1;
            } 
        }
        bool flag = false;
        for (int i = 2; i<n; i++)
        {
            if (arr[i] == '.' && arr[i-1] == '.' && arr[i-2] == '.')
            {
                flag = true;
                break;
            }
        }
        if (flag){
            cout<<2<<endl;
        }
        else{
            cout<< count<<endl;
        }
    }
    
}