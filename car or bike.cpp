#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int n, x;
  while (t--)
  {
    cin>>n>>x;
    if(n<x)
    {
      cout<<"Bike"<<endl;
    }
    else if(n>x)
    {
      cout<<"Car"<<endl;
    }
    else{
      cout<<"Same"<<endl;
    }
  }
  return 0;
}
