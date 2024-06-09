
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int p, q, r, s;
  while (t--)
  {
    cin >> p >> q;
    cin>>r>>s;
    if(p<=r && q<=s)
    {
      cout<<"POSSIBLE"<<endl;
    }
    else{
      cout<<"IMPOSSIBLE"<<endl;
    }

  }
  return 0;
}
