/* A college in down town maintains a list of its students graduating every year the college produces a report that list the following.write the c++ program using the scenario.Create a class person with attributes name and age and member functions read person and display person.Derive a class student from person with attributes roll no,average marks and member functions read person and display roll no and get average.Derive a class graduate student from student with attributes subject and employee and member functions read display subject and work status.Write a program to accomplish the following
    1) Get the required information for the class person student and graduate student
    2) Create an array of objects for graduate students
    3) Add member functions to find no of graduate students not placed and details of top scorer and low scorer*/
#include<iostream>
#include<cstring>
using namespace std;
class person
{
      protected:
         int age;
         char name[30];
      public:
         void read_person()
          {
              cout<<"   Enter name and age of student"<<endl;
              cin>>name>>age;
          }
         void display_person()
         {
             cout<<"\n Name         ="<<name;
             cout<<"\n Age          ="<<age;
         }
};
class student:public person
{
    protected:
       int roll_no,avg_marks;
    public:
       void read_person()
       {
           cout<<"\n Enter the roll number"<<endl;
           cin>>roll_no;
           cout<<"\n Enter the average marks"<<endl;
           cin>>avg_marks;
       }
       void display_person()
       {
           cout<<"\n Roll no         ="<<roll_no;
           cout<<"\n Average marks   ="<<avg_marks;
       }
};
class graduate:public student
{
    protected:
       char subject[50],work_status[30];
       int count,k,temp;
    public:
      void get()
      {
          count=0;
          cout<<"\n Enter the subject of graduate student"<<endl;
          cin>>subject;
          cout<<"\n Enter the work satus of student"<<endl;
          cin>>work_status;
      }
      void display()
      {
          cout<<"\n Subject       ="<<subject;
          cout<<"\n Work Status   ="<<work_status;
      }
      int find(int n,int i)
      {
              k=0;
              k=strcmp(work_status,"unemployed");
              if(k==0)
              {
                  count++;
              }
              if(avg_marks>=80)
              {
                  cout<<"\n top scorer"<<endl;
              }
              else if(avg_marks>=35 && avg_marks<=50)
              {
                  cout<<"\n low scorer"<<endl;
              }
              return count;
      }
};
int main()
{
    int i=0,n,res;
    cout<<"\n Enter the no of graduate students"<<endl;
    cin>>n;
    graduate s,g[100];
    for(i=0;i<n;i++)
    {
        cout<<" Enter the student "<<i+1<<" details"<<endl;
        g[i].person::read_person();
        g[i].student::read_person();
        g[i].get();
    }
    for(i=0;i<n;i++)
    {
        res=g[i].find(n,i);
    }
    for(i=0;i<n;i++)
    {
        g[i].person::display_person();
        g[i].student::display_person();
        g[i].display();
    }
      cout<<"\n no of unemployed students ="<<res;
    return 0;
}