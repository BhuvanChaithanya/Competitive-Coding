#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i<t ; i++)
    {
        int num;
        cin >> num;

        if (num %3 == 0)
        {
            cout << "Second"<<endl;
        }
        else
        {
            cout<<"First"<<endl;
        }
    }
}