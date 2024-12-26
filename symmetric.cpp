//Symmetric Matrix
#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j,n,count=0;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enter are array elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==a[j][i])
            {
                count++;
            }
        }
    }
    if(count==9)
    {
        cout<<"symmetric elements";
    }
    else
    {
        cout<<"non symmetric elements";
    }
    return 0;
}