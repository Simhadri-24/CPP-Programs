#include<iostream>
#include<iomanip>
using namespace std;
inline void power2(int b,int e)
{
    e=1;
    cout<<"power value="<<e;
}
inline void power(int b,int e)
{
    int temp,i=1;
    temp=b;
     while(i<e)
    {
        b=b*temp;
        i++;
    }
    cout<<"power value="<<b;
}
inline void power1(int b,int e)
{
    int temp,i=1;
    float a;
    temp=b;
    while(i<e)
    {
        b=b*temp;
        i++;
    }
    a=1/b;
    cout<<"power value="<<a;
}
int main()
{
    int b,e;
    cout<<"enter base and exponent values"<<endl;
    cin>>b>>e;
    if(e>0)
    {
       power(b,e);
    }
    else if(e<0)
    {
         power1(b,e);
    }
    else
    {
        power2(b,e);
    }
    return 0;
}