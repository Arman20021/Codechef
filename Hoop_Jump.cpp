#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int flag = 0;
        cin >> a;
        if (a == 1)
        {
            cout << "1" << endl;
        }
        else if (a > 1)
        {
            for (int i = 1; i <= a;)
            {
                flag++;
                i = i + 2;
            }
            cout << flag << endl;
        }
    }

    return 0;
}