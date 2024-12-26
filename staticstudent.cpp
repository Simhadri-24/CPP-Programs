/*Create a class called Student which contains the data members rollno, name, department, marks for 5 subjects. Include member functions to read the input values, calculate the status of the student and display the details. Average Marks Status -------------------- -------- >= 75 First class >= 60 Second class >= 45 Third class If any subject mark is less than 45 or the average is less than 45 consider it as fail. Write a main function to test the above class*/
#include<iostream>
using namespace std;
class student
{
    private:
        int rollno,m[5],avg,i,p=0;
        char name[20],department[200];
        static int total;
    public:
        void get()
        {
            cout<<"\n Enter the roll no of student"<<endl;
            cin>>rollno;
            cout<<"\n Enter the name of student"<<endl;
            cin>>name;
            cout<<"\n Enter the department of student"<<endl;
            cin>>department;
            cout<<"\n Enter the five subject marks of student"<<endl;
            for(i=0;i<5;i++)
            {
                cin>>m[i];
            }
        }
        void status()
        {
            for(i=0;i<5;i++)
            {
                total=total+m[i];
            }
            avg=total/5;
            while(m[i]<45 && avg<45)
                {
                    p=m[i];
                    i++;
                }
            if(p<45 && p!=0)
            {
                cout<<"\n you are fail"<<endl;
            }
            if(avg>=75)
            {
                cout<<"\n you are a first class student"<<endl;
            }
            else if(avg>=60)
            {
                cout<<"\n you are a second class student"<<endl;
            }
            else if(avg>=45)
            {
                cout<<"\n you are a third class student"<<endl;
            }
        }
        void disp()
        {
            cout<<"\n roll no student     "<<rollno<<endl;
            cout<<"\n name of student     "<<name<<endl;
            cout<<"\n department of student    "<<department<<endl;
            cout<<"\n Average marks of student    "<<avg<<endl;
        }
};
int student::total=0;
int main()
{
    student s;
    s.get();
    s.status();
    s.disp();
    return 0;
}