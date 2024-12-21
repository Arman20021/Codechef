#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int w, w1, x, x1, M;
        cin >> w >> w1 >> x >> x1 >> M;
        int differ = w1 - w;
        if ((x * M) <= differ && differ <= (x1 * M))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}