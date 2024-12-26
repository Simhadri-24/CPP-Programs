#/*Create three classes X, Y, and Z with one private integer variable in each class. Initialize these variables using the member functions. Write a non-member function to add the objects of these classes and check whether the sum is prime or composite. If the sum is composite, then find its prime factors. Write a main() function to exercise the above function.*/
#include<iostream>
using namespace std;
class Y;
class Z;
class X
{
    private:
       int a;
    public:
      void getdata()
      {
          cout<<"\n Enter the a value"<<endl;
          cin>>a;
      }
      friend void cal(X,Y,Z);
};
class Y
{
    private:
      int b;
    public:
      void getdata()
      {
          cout<<"\n Enter the b value"<<endl;
          cin>>b;
      }
      friend void cal(X,Y,Z);
};
class Z
{
    private:
      int c;
    public:
      void getdata()
      {
          cout<<"\n Enter the c value"<<endl;
          cin>>c;
      }
      friend void cal(X,Y,Z);
};
void cal(X x,Y y,Z z)
{
    int count,sum;
    sum=x.a+y.b+z.c;
    for(int i=0;i<sum;i++)
    {
        count=0;
        if(sum%i==1)
        {
            count++;
        }
    }
    cout<<count;
    if(count==1)
    {
        cout<<"\n prime number";
    }
    else
    {
        cout<<"\n composite number";
    }
    cout<<"\n prime factors are ";
    for(int i=0;i<sum;i++)
    {
        if(sum%i==0)
        {
            cout<<"\n "<<i;
        }
    }
}
int main()
{
    X x;
    Y y;
    Z z;
    x.getdata();
    y.getdata();
    z.getdata();
    cal(x,y,z);
    return 0;
}