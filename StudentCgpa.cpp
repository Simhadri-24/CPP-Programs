/*Create a class named STUDENT with the following private data members-Name(string),Rgno(long) and
  Dept(string).Include member functions-getStudInfo() to take input for the data members and
  dispStudInfo() to print the details.
  
  Derive a class named ACADEMIC from STUDENT with the following private data members-YearOfStudy(in
  ) and CGPA(float).
  
  Derive another class named COCURRICULAR from STUDENT with a private data members -SkillSet(
  -dimentional char array of dimension 5*10).Override the base class member functions in both the
  derived classes.
   
  In mainmethod,demonstrate the functions in the above hierarchies by creating array of 5 objects
  for each class.Get academic and cocurricular details of students from the user.From ACADEMIC array
  of objects, find students with CGPA >7.5 (Include appropriate member functions to do this) and
  display name,reg no and yearofstudy of those students.Read the skillset from the user as input and
  through dispStudInfo() function, display the details of the students with the given skillset from
  the COCUURICULAR array of objects.*/
#include<iostream>
#include<cstring>
using namespace std;
class STUDENT
{
    private:
       string name,dept;
       long int regno;
    public:
       void getStudInfo(int i)
       {
           cout<<"\n Enter student "<<i+1<<" details";
           cout<<"\n Enter the register no"<<endl;
           cin>>regno;
           cout<<"Enter the name of student"<<endl;
           cin.ignore();
           getline(cin,name);
           cout<<"\n Enter the department"<<endl;
           cin.ignore();
           getline(cin,dept);
       }
       void dispStuInfo(int i)
       {
           cout<<"students list of cgpa greater than 7.5: ";
           cout<<"\n Name    ="<<name;
           cout<<"\n Reg no  ="<<regno;
           cout<<"\n department ="<<dept;
       }
};
class ACADEMIC:public STUDENT
{
    private:
       int YearOfStudy;
       float CGPA;
    public:
       void getStudInfo()
       {
           cout<<"\n Enter the present year of study"<<endl;
           cin>>YearOfStudy;
           cout<<"\n Enter the CGPA of stduent"<<endl;
           cin>>CGPA;
       }
       int cal(int i)
       {
           if(CGPA>=7.5)
           {
              return i; 
           }
           return -1;
       }
       void dispStuInfo()
       {
           cout<<"\n Year Of Study  ="<<YearOfStudy;
           cout<<"\n CGPA           ="<<CGPA;
       }
};
class COCURRICULAR:public STUDENT
{
    private:
        char SkillSet[5][10],i=0;
    public:
        void getStudInfo()
        {
            cout<<"\n Enter your five skills"<<endl;
            for(i=0;i<5;i++)
            {
                 cin>>SkillSet[i];
            }
        }
        void dispStuInfo()
        {
            cout<<"\n skills of student are ";
            for(i=0;i<5;i++)
            {
                    cout<<"\n "<<SkillSet[i];
                
            }
        }
};
int main()
{
    int res[10],n,i=0,j=0,count=0;
    cout<<"\n Enter the no of students"<<endl;
    cin>>n;
    ACADEMIC a[n];
    COCURRICULAR c[n];
    for(i=0;i<n;i++)
    {
        a[i].STUDENT::getStudInfo(i);
        a[i].getStudInfo();
        c[i].getStudInfo();
    }
    for(i=0;i<n;i++)
    {
        res[j]=a[i].cal(i);
        j++;
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        if(res[j]==i)
        {
            count++;
            a[i].STUDENT::dispStuInfo(i);
            a[i].dispStuInfo();
            c[i].dispStuInfo();
        }
    }
    if(count==0)
    {
        cout<<"\n There the no students with CGPA greater than 7.5";
    }
    return 0;
}