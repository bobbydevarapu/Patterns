#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  
}
int main()
{
  cout<<"Enter no.of test cases: ";
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
    {
  int n;
  cout<<"Enter no. of rows: ";
  cin>>n;
  print1(n);
  }
}