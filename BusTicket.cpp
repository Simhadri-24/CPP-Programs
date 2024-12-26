/*Create a class busticket with member variables ticket id,passanger name,source city,destination city and ticket cost.Include getdata and putdata functions in main function.create array of objects(dynamically) and display all passengers details, who booked ticket to specific city(hyderabad)*/
#include<iostream>
#include<cstring>
using namespace std;
class busticket
{
    protected:
       int ticket_id,ticket_cost;
       char name[30],source_city[50],destination_city[50];
    public:
       void getdata()
       {
           cout<<"\n Enter the Ticket id "<<endl;
           cin>>ticket_id;
           cout<<"\n Enter the name of passenger"<<endl;
           cin>>name;
           cout<<"\n Enter the pick up point"<<endl;
           cin>>source_city;
           cout<<"\n Enter the drop point"<<endl;
           cin>>destination_city;
           cout<<"\n Enter the ticket cost"<<endl;
           cin>>ticket_cost;
       }
       int putdata()
       {
           int k=0,count;
           k=strcmp(destination_city,"hyderabad");
           count=0;
           if(k==0)
           {
               cout<<"\n hyderabad destination passanger details"<<endl;
              cout<<"\n Ticket Id       ="<<ticket_id;
              cout<<"\n Name            ="<<name;
              cout<<"\n Source city     ="<<source_city;
              cout<<"\n destination city="<<destination_city;
              return count++;
           }
       }
};
int main()
{
    int i=0,n,res;
    cout<<"\n Enter the no of passengers"<<endl;
    cin>>n;
    busticket b[50];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter the passenger "<<i+1<<" details";
        b[i].getdata();
    }
    for(i=0;i<n;i++)
    {
       res=b[i].putdata();
    }
     if(res>0)
     {
         cout<<"\n There are no passanger to hyderabad city"<<res;
     }
    return 0;
}