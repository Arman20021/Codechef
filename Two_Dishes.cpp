#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int dish = 0;
         if (b >=a + c)
        {
            dish = a + c;
        }
        else if (b < a + c)
        {
            dish = b;
        }
        cout<<"";
        if(n<=dish)   cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}