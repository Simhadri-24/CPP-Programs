/*Create a class called Participant that contains a name, participant Id,
  age, gender,marital status, and event name. Include the following member
  functions getdata() to get all detail except participant Id and even
  name from the user
i)getLength() this function should return the length of
  the participant's name without using built-in function.
ii)getInitial() this function should return first character of the
  participant's name.
iii)getID() this function should call getLength() and getInitial()
   functions to fill participantld (eg:. A7).
iv)toCaps(0 to change the participant's name into uppercase and pre-fix(M
   ./Mrs./Miss/Master) based on age, gender & marital_status of the
   participant.
v)allotEvent() to fix event for the participant based on their age.
vi)putdata() to display the data.
       Event Name                             Age
       Long jump                             <=18
        Running                           >18 && <=50                    
 Lemon with spoon race                   >50 and above

Write a main() function to exercise this class. It should create an array
of type participant.. Get the details for 'N' number of participants,
apply all functions and finally,display their details.*/
#include<iostream>
#include<cstring>
using namespace std;
class participant
{
    protected:
       int id,age,i;
       string gender,marital_status,event_name,name;
    public:
       void getdata()
       {
           cout<<"\n Enter the Name"<<endl;
           cin.ignore();
           getline(cin,name);
           cout<<"\n Enter the age "<<endl;
           cin>>age;
           cout<<"\n Enter the gender"<<endl;
           cin.ignore();
           getline(cin,gender);
           cout<<"\n Enter the marital status"<<endl;
           cin.ignore();
           getline(cin,marital_status);
       }
       int get_length()
       {
           int l=0,i=0;
          while(name[i]!='\0')
          {
              l++;
              i++;
          }
          return l;
       }
       int get_initial()
       {
            return name[0];
       }
       void getid()
       {
           id=get_length()+get_initial();
       }
       void tocaps()
       {
           if(age<=18&& gender=="M")
           {
              name="Master."+name; 
           }
           else if(age<=18&& gender=="F")
           {
               name="Miss."+name;
           }
           else if(age>18&& gender=="F")
           {
               name="Mrs."+name;
           }
           else if(age>18&& gender=="M")
           {
               name="Mrs."+name;
           }
           for(char& c:name)
           {
               if(c>='a'&& c<='z')
               {
                   c=c-'a'+'A';
               }
           }
       }
       void allotevent()
       {
           if(age<=18)
           {
               event_name="Long jump";
           }
           else if(age>=18 && age<=50)
           {
               event_name="Running";
           }
           else if(age>=50)
           {
               event_name="Lemon with spoon race";
           }
       }
       void putdata()
       {
           cout<<"\n Participant name   ="<<name;
           cout<<"\n Participant Id     ="<<id;
           cout<<"\n Age                ="<<age;
           cout<<"\n Gender             ="<<gender;
           cout<<"\n Marital status     ="<<marital_status;
           cout<<"\n Event name         ="<<event_name;
       }
};
int main()
{
    int n,i=0;
    cout<<"\n Enter the no of participants "<<endl;
    cin>>n;
    participant p[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter Participant "<<i+1<<" details";
        p[i].getdata();
    }
    for(i=0;i<n;i++)
    {
        p[i].get_length();
        p[i].get_initial();
        p[i].getid();
        p[i].allotevent();
    }
    for(i=0;i<n;i++)
    {
        p[i].putdata();
    }
    return 0;
}