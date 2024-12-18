#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a>=b && a<=c)
        {
            cout << "Take second dose now" << endl;
        }
        else if (a < b)
        {
            cout << "Too Early" << endl;
        }
        else
        {
            cout << "Too Late" << endl;
        }
    }

    return 0;
}