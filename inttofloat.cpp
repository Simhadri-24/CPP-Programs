#include<iostream>
using namespace std;
inline void inte(float n)
{
    int res;
    res=n;
    cout<<"\n integer value="<<res;
}
inline void floa(float n)
{
    int res1;
    float res2;
    res1=n;
    res2=n-res1;
    cout<<"\n floating point value="<<res2;
}
int main()
{
    float n;
    cout<<"enter the floting point value"<<endl;
    cin>>n;
    inte(n);
    floa(n);
    return 0;
}