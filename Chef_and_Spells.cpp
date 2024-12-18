#include <bits/stdc++.h>
using namespace std;
int main()
{
 
   int t;
   cin>>t;
   while (t--)
   {
     int a,b,c;
     cin>>a>>b>>c;
     int sum1=a+b;
     int sum2=a+c;
     int sum3=c+b;
    int sum=max({sum1,sum2,sum3});
    cout<<sum<<endl;

   }
   
   
    return 0;
}