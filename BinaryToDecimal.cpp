/*Create C++ program to convert the given binary value to its equivalent decimal value using virtual
  function. Create two classes decimal and binary with function called convert (), where the class
  ‘decimal’ acts as base for binary class. The method convert () should be overridden in the derived
  class with appropriate logic*/
#include<iostream>
#include<cmath>
using namespace std;
class decimal
{
    protected:
        int rem,i=0,b;
    public:
     void get()
       {
          cout<<"\n Enter the  binary value"<<endl;
           cin>>b;
       }
       virtual void convert()=0;
};
class binary:public decimal
{
    protected:
       int D=0;
    public:
       void convert()
       {
           while(b!=0)
           {
               rem=b%10;
               D=D+rem*pow(2,i);
               b=b/10;
               i++;
           }
           cout<<"\n decimal value  ="<<D;
       }
};
int main()
{
    decimal *s;
    binary b;
    s=&b;
    s->get();
    s->convert();
    return 0;
}