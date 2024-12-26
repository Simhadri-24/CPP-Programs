/*Create a class student_details with data members (string name, int reg no, int marks)
  and include the following member functions.
(i) getdetails() to read the student details from user
(ii) display () for displaying the student's details.
(iii) Overload the operator"<" to compare two students based on marks.
In main(), create array of objects for five students, sort the students based on marks
with the help of overloaded "<" operator. Display the sorted array.*/
#include<iostream>
using namespace std;
class student
{
    private:
      int regno,marks;
      string name;
    public:
      void get(int i)
      {
          cout<<"\n Enter student "<<i+1<<" details";
          cout<<"\n Enter the name"<<endl;
          cin.ignore();
          getline(cin,name);
          cout<<"\n Enter the register no"<<endl;
          cin>>regno;
          cout<<"\n Enter the total marks"<<endl;
          cin>>marks;
      }
      void display(int i)
      {
          cout<<"\n student "<<i+1<<" details";
          cout<<"\n Name        ="<<name;
          cout<<"\n Reg no      ="<<regno;
          cout<<"\n Marks       ="<<marks;
      }
      int operator <(student &s)
      {
          return marks<s.marks;
      }
};
int main()
{
    int n,i=0,j=0;
    cout<<"\n Enter the no of students"<<endl;
    cin>>n;
    student s[n];
    for(i=0;i<n;i++)
    {
        s[i].get(i);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[j]<s[i])
            {
                student t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        s[i].display(i);
    }
    return 0;
}