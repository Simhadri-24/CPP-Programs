/*Implement an abstract base class called IncomeTaxPayee consisting of the
  data members: Name, Gender, Age, Gross Pay, Deductions, Taxable Income
  and Tax on Taxable Income.
 Derive three classes as Individuals, and SeniorCitizen from
  IncomeTaxPayee. In each class implement a function called ComputeTax
  with the appropriate tax formula.
 This function should be pure virtual in the base. Use the base class
  pointeer to invoke the ComputeTax function of the derived classes
  Display the tax details for derived class objects.
       Note: Taxable Income = Gross Pay - Deductions.
   Tax on Taxable Income to be computed using the following conditions.
                        Individuals
   Taxable Income                    Rate of income-tax
Up to Rs. 2,50,000                           -
Rs. 2,50,000 to Rs. 5,00,000                5%
Rs. 3,00,000 to Rs. 5,00,000                20%
Above Rs. 10,00,000                         30%
                        Senior Citizen
                      (age of 60 years )
   Taxable Income                    Rate of income-tax   
Up to Rs. 3,00,000                           -
Rs. 5,00,000 to Rs. 10,00,000                5%
Rs. 5,00,000 to Rs. 10,00,000                20%
Above Rs. 10,00,000                          30%*/ 
#include<iostream>
#include<cstring>
using namespace std;
class income_tax_payee
{
    protected:
      int age,gp,d;
      long int income,tax_income;
      string name;
    public:
      virtual int get(int x)
      {
          age=x;
          cout<<"\n Enter the Name"<<endl;
          cin>>name;
          cout<<"\n Enter the gross pay "<<endl;
          cin>>gp;
          cout<<"\n Enter the deductions "<<endl;
          cin>>d;
         return age;
      }
      void disp()
      {
          cout<<"\n Name      ="<<name;
          cout<<"\n Age       ="<<age;
          cout<<"\n Gross pay ="<<gp;
          cout<<"\n Deductions="<<d;
      }
      virtual void computeTax()=0;
};
class individuals:public income_tax_payee
{
    public:
       void computeTax()
       {
           income=gp-d;
           if(income<=250000)
           {
               tax_income=0;
           }
           if(income>=250000 && income<=500000)
           {
               tax_income=(5.0/100)*income;
           }
           if(income>500000 && income<=1000000)
           {
               tax_income=(20.0/100)*income;
           }
           if(income>1000000) 
           {
               tax_income=(30.0/100)*income;
           }
           cout<<"\n Income tax is    ="<<tax_income;
       }
};
class seniorcitizen:public income_tax_payee
{
    public:
       void computeTax()
       {
           income=gp-d;
           if(income>=300000)
           {
               tax_income=0;
           }
           if(income>=300000 && income<=500000)
           {
               tax_income=(5.0/100)*income;
           }
           if(income>500000 && income<=1000000)
           {
               tax_income=(20.0/100)*income;
           }
           if(income>1000000) 
           {
               tax_income=(30.0/100)*income;
           }
           cout<<"\n Income tax is    ="<<tax_income;
       }
};
int main()
{
    int age;
    cout<<"\n Enter the age"<<endl;
    cin>>age;
    income_tax_payee  *a;
    individuals i;
    seniorcitizen s;
    if(age<60)
    {
        a=&i;
    }
    else
    {
        a=&s;
    }
    a->get(age);
     if(age<60)
    {
        a=&i;
    }
    else
    {
        a=&s;
    }
    a->disp();
    a->computeTax();
  return 0;
}