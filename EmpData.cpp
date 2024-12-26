/*Create a class called EMPDATA that has the following data members-Empld(only
  digits allowed;4 digits to be used),Department(PROD/ACCT/SYST/PURC/LOGS),
  CategoryCode(R-Regular/C-Contract),EmpName,and EmpCode.All the data
  members are of string(built-in class) type.Include parameterized constructor to assign
  values the data members except for EmpCode.Include the following member
  functions:
   i)updateEmpcode() that updates the EmpCode data member as follows:
    concatenate Department with CategoryCode and followed by Empld. (Example:
    ACCTR3458 is the emp code of an employee of Accounts department of Regular
    category and with Empld=3458).
  ii)searchByDept() that receives the Department as an argument and displays the
     details of all the employees in that department
  iii)searchByName() that receives a Name as argument and displays the details of
      all the employees, whose name contains the argument string (The argument
      name may be at the beginning or in the middle of the name also)
  In main() method, create an array of objects of EMPDATA class and demonstrate the
  functionalities.*/
#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
class empdata
{
    protected:
       string empid,catcode,empcode;
       string dept,empname;
    public:
       empdata()
       {
           
       }
       empdata(string no,string dep,string name,string ccode)
       {
           this->empid=no;
           this->dept=dep;
           this->empname=name;
           this->catcode=ccode;
           cout<<"\n Enter the employee code"<<endl;
           cin>>empcode;
       }
       void update_empcode()
       {
           this->empcode=this->dept+this->catcode+this->empid;
       }
       void searchby_dept(string department,int i)
       {
           if(this->dept==department)
           {
               cout<<"\n Employeee "<<i+1<<" details";
               cout<<"\n  Name          ="<<this->empname;
               cout<<"\n  Id            ="<<this->empid;
               cout<<"\n Department     ="<<this->dept;
               cout<<"\n category code  ="<<this->catcode;
               cout<<"\n Employee code  ="<<this->empcode;
           }
       }
       void searchby_name(string sname,int i)
       {
           int p=-1;
           p=this->empname.find(sname);
           if(p>=0)
           {
               cout<<"\n Employeee "<<i+1<<" details";
               cout<<"\n  Name          ="<<this->empname;
               cout<<"\n  Id            ="<<this->empid;
               cout<<"\n Department     ="<<this->dept;
               cout<<"\n category code  ="<<this->catcode;
               cout<<"\n Employee code  ="<<this->empcode;
           }
       }
};
int main()
{
    int n,i=0,op;
    string department,sname,no;
    string dep,name,ccode;
    cout<<"\n Enter the no of employees"<<endl;
    cin>>n;
    empdata *e=new empdata[n];
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter the employeee "<<i+1<<" details";
        cout<<"\n Enter the Employeee id"<<endl;
        cin>>no;
        cout<<"\n Enter the Employee name"<<endl;
        cin.ignore();
        getline(cin,name);
        cout<<"\n Enter the department(PROD/ACCT/SYST/PURC/LOGS)"<<endl;
        cin>>dep;
        cout<<"\n Enter the category code(R-Regular/C-Contract)"<<endl;
        cin>>ccode;
        e[i]=empdata(no,dep,name,ccode);
    }
    for(i=0;i<n;i++)
    {
        e[i].update_empcode();
    }
    cout<<"\n 1.search by department \n 2.search by name"<<endl;
    cout<<" Enter your option"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
           cout<<"\n Enter the department(PROD/ACCT/SYST/PURC/LOGS) to search"<<endl;
           cin>>department;
           for(i=0;i<n;i++)
           {
               e[i].searchby_dept(department,i);
           }
           break;
        case 2:
           cout<<"\n Enter the name to search"<<endl;
           cin>>sname;
           for(i=0;i<n;i++)
           {
               e[i].searchby_name(sname,i);
           }
           break;
    }
};