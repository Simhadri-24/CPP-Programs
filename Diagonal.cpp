//Diagonal matrix
#include<iostream>
using namespace std;
int main()
{
  int a[3][3],i,j,m,n,count1=0,count2=0;
  cout<<"Enter row and column  size"<<endl;
  cin>>m>>n;
  cout<<"Enter are array elements"<<endl;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      cin>>a[i][j];
    }
  }
  if(m==n)
  {
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i==j)
        {
          if(a[i][j]!=0)
          {
            count1++;
          }
        }
        else
        {
          if(a[i][j]==0)
          {
            count2++;
          }
        }
      }
    }
    if(count1==3&&count2==6)
    {
      cout<<"diagonal matrix";
    }
    else
    {
      cout<<"non diagonal matrix";
    }
  }
return 0;
}