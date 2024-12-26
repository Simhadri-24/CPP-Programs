#include"iostream"
using namespace std;
class bank
{
    private:
      int balance=0,amount,i;
      static int total;
    public:
      void get(int i)
        {
            cout<<"\n Enter "<<i+1<<" customer account balance"<<endl;
            cin>>balance;
        }
      void deposit(int i)
      {
          cout<<"\n Enter the amount to deposit";
          cin>>amount;
          balance=balance+amount;
          cout<<"customer "<<i<<" account balance"<<balance<<endl;
      }
      void withdraw(int i)
      {
          cout<<"\n Enter the amount to with draw"<<endl;
          cin>>amount;
          balance=balance-amount;
          cout<<"customer "<<i<<" account balance"<<balance<<endl;
      }
      void sum()
      {
          total=total+balance;
      }
      static void disp()
      {
       cout<<"\n Total amount="<<total;  
      }
};
int bank::total=0;
int main()
{
    
    int n,op,i;
    cout<<"\n Enter the no of customers ";
    cin>>n;
    bank b[20];
    for(i=0;i<n;i++)
    {
        b[i].get(i);
    }
    cout<<"\n Enter your option";
    cout<<"\n 1.deposit\n 2.withdraw"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
        i=0;
        cout<<"\n Enter  customer number to deposit amount"<<endl;
        cin>>i;
        b[i-1].deposit(i);
        break;
        case 2:
        i=0;
        cout<<"\nEnter customer number to withdraw amount"<<endl;
        cin>>i;
        b[i-1].withdraw(i);
        break;
    }
    for(i=0;i<n;i++)
    {
       b[i].sum();
    }
    bank::disp();
    return 0;
}