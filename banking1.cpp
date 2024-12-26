/*Create a class Bank-details with account number, customer name, balance, and the number of transactions as data members. Write a menu-driven program with the following options: 1. DEPOSIT 2. WITHDRAW3. TOTAL NO OF TRANSACTIONS 4. BALANCE CHECK 5. EXIT. • deposit () is to deposit the amount • withdraw () to draw any amount and update the balance. (while making the withdraw optioncheck for minimum balance) • noOfTransactions () is to view the total number of transactions made • current Balance () is to view the current balance • exit () enables the user to quit from the menu. Write a main function to exercise all these functions*/
#include<iostream>
using namespace std;
int transaction=0;
class bank
{
    private:
         int accno,balance,amount;
         char name[30];
    public:
         void get()
         {
             cout<<"\n Enter the account number of customer"<<endl;
             cin>>accno;
             cout<<"\n Enter the name of customer"<<endl;
             cin>>name;
             cout<<"\n Enter the balance of customer"<<endl;
             cin>>balance;
         }
        void deposit()
        {
             cout<<"\n Enter the amount to deposit"<<endl;
             cin>>amount;
             balance=balance+amount;
             cout<<"your amount deposited succesfully"<<endl;
             transaction++;
        }
        void withdraw()
        {
            cout<<"\n Enter the amount to with draw"<<endl;
            cin>>amount;
            if(balance>amount)
            {
               balance=balance-amount;
               cout<<"your amount withdraw successfully"<<endl;
            }
            else
            {
                cout<<"\n your account doesn't has minimum balance to withdraw"<<endl;
            }
            transaction++;
        }
        void trans()
        {
            cout<<"\n No of transactions made by customer    "<<transaction<<endl;
        }
        void cbalance()
        {
            cout<<"\n your current balance is    "<<balance<<endl;
        }
};
int main()
{
    int op;
    char ch;
    bank b;
    b.get();
    do 
    {
        cout<<"\n 1.DEPOSIT \n 2.WITHDRAW \n 3.TOTAL NO OF TRANSACTIONS \n 4.BALANCE CHECK \n 5.EXIT"<<endl;
        cout<<"\n Enter your option"<<endl;
        cin>>op;
        switch(op)
        {
            case 1:
                 b.deposit();
                 break;
            case 2:
                 b.withdraw();
                 break;
            case 3:
                 b.trans();
                 break;
            case 4:
                 b.cbalance();
                 break;
            case 5:
                 exit(0);
        }
        cout<<"\n do you want to continue y/n"<<endl;
        cin>> ch;
        cout<<ch;
    }while(ch=='y' || ch=='Y');
 return 0;
 
}