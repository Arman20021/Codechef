#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int s, a, b, c;
        cin >>s>> a >> b >> c;
        float point = c / 100.0;
        
        float current_price = s + (s * point);
        if (current_price >= a && current_price <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}