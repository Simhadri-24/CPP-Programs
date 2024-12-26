/*Develop a C++ program using Inheritance for a bank
  application.Consider a bank providing two types of accounts
  to its customers, SB Ac and Current Ac. Both accounts have
  some common features but they also have some unique
  features of their own.
 The common features for both accounts are:
     i)Data members: (i) Ac no. (i) Name (ii) Acc. Balance
     ii)Member functions: ) Deposit (üi) Withdraw. (iii) Minimum bal. penalty
     iii)Unique for SB Acc. is ATM Card no. (Data member).
Unique for CA overdraft facility (member function). During
withdraw, if the balance is not sufficient, it should call
this function to release the amount and store negative balance
for the account. Example, if balance is 5000 and withdraw
amount is 6000, then withdraw function should call this
overdraft function to sanction the amount and update the
balance as -1000.
The minimum balance penalty will be calculated for Rs 1000 in
the case of SB ACC and Rs 5000 in the case of CA. The penalty
amount is Rs 100 for both accounts.
Now define a base class Bank and two derived classes (SB) and
(CA) with appropriate members for each class.*/
#include<iostream>
#include<cstring>
using namespace std;
class bank
{
    protected:
       int accno,balance=0,amount;
       string name;
    public:
       void get()
       {
           cout<<"\n Enter the name "<<endl;
           cin.ignore();
           getline(cin,name);
           cout<<"\n Enter  account number "<<endl;
           cin>>accno;
           cout<<"\n Enter the balance"<<endl;
           cin>>balance;
       }
       void deposit()
       {
           cout<<"\n Enter the amount to deposit"<<endl;
           cin>>amount;
           balance=balance+amount;
           cout<<"\n Amount deposited successfully"<<endl;
           cout<<"\n your balance is "<<balance;
       }
       void put()
       {
           cout<<"\n Name             ="<<name;
           cout<<"\n Account Number   ="<<accno;
           cout<<"\n Balance          ="<<balance;
       }
       virtual void withdraw()=0;
       virtual void mbp()=0;
};
class sb:public bank
{
    protected:
       int atmno;
    public:
       void get()
       {
           cout<<"\n Enter the ATM number"<<endl;
           cin>>atmno;
       }
       void withdraw()
       {
           cout<<"\n Enter the amount to withdraw"<<endl;
           cin>>amount;
           if(balance>amount)
           {
               balance=balance-amount;
               cout<<"\n Amount withdrawn successfully"<<endl;
               cout<<"your balance is "<<balance;
           }
           else
           {
               cout<<"Insufficient balance"<<endl;
           }
       }
       void mbp()
       {
           if(balance<1000)
           {
               balance=balance-100;
               cout<<"\n penalty added"<<endl;
               cout<<"Account balance after penalty amount ="<<balance;
           }
       }
       void put()
       {
           cout<<"\n ATM card number   ="<<atmno;
       }
};
class ca:public bank
{
    public:
       void withdraw()
       {
           cout<<"\n Enter the amount to withdraw"<<endl;
           cin>>amount;
           if(balance>amount)
           {
               balance=balance-amount;
               cout<<"\n Amount withdrawn successfully"<<endl;
           }
       }
       void overdraft()
       {
           balance=balance-amount;
           cout<<"\n Amount withdrawn successfully";
           cout<<"\n your balance is"<<balance;
           cout<<"\n Overdraft successfully"<<endl;
       }
       void mbp()
       {
           if(balance<5000)
           {
               balance=balance-100;
           }
           cout<<"penalty added"<<endl;
           cout<<"Account balance after penalty amount ="<<balance;
       }
};
int main()
{
    int op,op1;
    sb s;
    ca c;
    cout<<"\n 1.Current account \n 2.Savings account";
    cout<<"\n Enter your option"<<endl;
    cin>>op;
    cout<<"\n 1.Deposit \n 2.Withdraw";
    cout<<"\n Enter your option"<<endl;
    cin>>op1;
    switch(op)
    {
        case 1:
            switch(op1)
            {
                case 1:
                  c.bank::get();
                  c.bank::deposit();
                  c.bank::put();
                  break;
                case 2:
                  c.bank::get();
                  c.withdraw();
                  c.overdraft();
                  c.mbp();
                  c.bank::put();
                  break;
            }
            break;
        case 2:
            switch(op1)
            {
                case 1:
                  s.bank::get();
                  s.bank::deposit();
                  s.bank::put();
                  break;
                case 2:
                  s.bank::get();
                  s.withdraw();
                  s.mbp();
                  s.bank::put();
                  break;
            }
            break;
        return 0;   
    }
}