#include<bits/stdc++.h>
using namespace std;
void print10(int n)
{
  for(int i=0;i<n;i++)
  {
    for(char ch='A';ch<='A'+i;ch++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
int main()
{
  cout<<"enter no.of rows:";
  int n;
  cin>>n;
  print10(n);
}
