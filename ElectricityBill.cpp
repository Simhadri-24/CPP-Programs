/*Create a class Electricity has data members such as customer name, id, previous unit,
  current unit and category. Include abstract method calculate bill () in the base class.
  Create the subclasses Domestic, Commercial and Industrial from Electricity. Include
  data members in each class if necessary. Override the member function calculate bill()
  in subclasses. Calculate electricity bill for the following power tariff.
                             Unit Range / Category                     Charges per Unit(RS)
                                    0-100                                    2.75
Domestic                           101-500                                   4.5
                                  Above 500                                   5
Commercial                          0-200                                     5
                                   201-500                                   5.5
                                  Above 500                                   6
Industry                           Large                                      7  
                                   Medium                                     6
                                   Small                                      5*/
#include<iostream>
using namespace std;
class Electricity
{
    protected:
       int id,pre_unit,cur_unit;
       string cat,name;
    public:
       virtual void calculate_bill()=0;
};
class Domestic:public Electricity
{
    private:
       float d,d1,d2,d3,res;
    public:
       void calculate_bill()
       {
           cout<<"\n Enter the unit range of power meter(ex=0-100)"<<endl;
           cin>>pre_unit;
           cin>>cur_unit;
           d=cur_unit-pre_unit;
           if(d>0)
           {
               if(d<100)
               {
                   d1=d*2.75;
               }
               if(d>100)
               {
                   d1=100*2.75;
               }
               if(d>100)
               {
                   if(d<500)
                   {
                       d2=(d-100)*4.5;
                   }
                   if(d>500)
                   {
                       d2=400*4.5;
                   }
                   if(d>500)
                   {
                       d3=(d-500)*5;
                   }
               }
           }
           res=d1+d2+d3;
           cout<<"\n Your Electricity bill is ="<<res;
       }
};
class Commercial:public Electricity
{
    private:
       float c,c1,c2,c3,res;
    public:
       void calculate_bill()
       {
           cout<<"\n Enter the unit range of power meter(ex=0-100)"<<endl;
           cin>>pre_unit;
           cin>>cur_unit;
           c=cur_unit-pre_unit;
           if(c>0)
           {
               if(c<200)
               {
                   c1=c*5;
               }
               if(c>200)
               {
                   c1=200*5;
               }
               if(c>200)
               {
                   if(c<500)
                   {
                       c2=(c-200)*5.5;
                   }
                   if(c>500)
                   {
                       c2=300*5.5;
                   }
                   if(c>500)
                   {
                       c3=(c-500)*6;
                   }
               }
           }
           res=c1+c2+c3;
           cout<<"\n Your Electricity bill is ="<<res;
       }
};
class Industry:public Electricity
{
    private:
       float i;
       string s;
    public:
       void calculate_bill()
       {
           cout<<"\n Enter the industry is (large/medium/small)"<<endl;
           cin.ignore();
           getline(cin,s);
           cout<<"\n Enter the unit range of power meter(ex=0-100)"<<endl;
           cin>>pre_unit;
           cin>>cur_unit;
           if(s=="large")
           {
              i=(cur_unit-pre_unit)*7;
              cout<<"\n Your Electricity bill is ="<<i;
           }
           else if(s=="medium")
           {
               i=(cur_unit-pre_unit)*6;
               cout<<"\n Your Electricity bill is ="<<i;
           }
           else
           {
               i=(cur_unit-pre_unit)*5;
               cout<<"\n Your Electricity bill is ="<<i;
           }
       }
};
int main()
{
    Electricity *e;
    Domestic d;
    Commercial c;
    Industry i;
    int op;
    cout<<"\n 1.Domestic \n 2.Commercial \n 3.Industrial"<<endl;
    cout<<"Enter your option"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
           e=&d;
           e->calculate_bill();
           break;
        case 2:
           e=&c;
           e->calculate_bill();
           break;
        case 3:
           e=&i;
           e->calculate_bill();
           break;
    }
    return 0;
}