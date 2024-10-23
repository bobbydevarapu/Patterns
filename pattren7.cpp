#include<bits/stdc++.h>
using namespace std;
void print7(int n)
{
  for(int i=1;i<=2*n-1;i++)
  {
    int star=i;
    if(i>n) star=2*n-i;
    for(int j=1;j<=star;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}
int main()
{
  cout<<"enter no.of *'s:";
  int n;
  cin>>n;
  print7(n);
  return 0;
}