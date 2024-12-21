#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        long long sum = N * (N + 1) / 2;

        if (sum % 2 == 0)
        {
            cout << N << endl;
        }
        else
        {
            cout << N - 1 << endl;
        }
    }

    return 0;
}
