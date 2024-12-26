/*Develop a C++ program to compare passenger details by overloading relational operator.Create a class
  TrainTicket(pnr number, passenger name, age, ticket cost).  Write getdata and putdata functions.  If
  age of the passenger is greater than 60 then reduce the ticket cost by 50 percent.*/
  #include<iostream>
  using namespace std;
  class TrainTicket
  {
      protected:
          int pnr_number,age,ticket_cost;
          string passanger_name;
      public:
           void getdata()
           {
               cout<<"\n Enter the pnr number"<<endl;
               cin>>pnr_number;
               cout<<"\n Enter the passanger name"<<endl;
               cin.ignore();
               getline(cin,passanger_name);
               cout<<"\n Enter the age of passanger"<<endl;
               cin>>age;
               cout<<"\n Enter the ticket cost"<<endl;
               cin>>ticket_cost;
           }
           void putdata()
           {
               if(age>60)
               {
                   ticket_cost/=2;
               }
               cout<<"\n pnr number      ="<<pnr_number;
               cout<<"\n passanger name  ="<<passanger_name;
               cout<<"\n Age             ="<<age;
               cout<<"\n Ticket cost     ="<<ticket_cost;
           }
  };
  int main()
  {
      TrainTicket t;
      t.getdata();
      t.putdata();
      return 0;
  }