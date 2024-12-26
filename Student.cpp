#include<iostream>
using namespace std;
class student
{
    private:
        int reg,m1,m2,m3,total,n,i=0;
        float avg;
        char name[20];
    public:
        void get()
        {
            cout<<"enter the no of students"<<endl;
            cin>>n;
            for(i=0;i<n;i++)
            {
             cout<<"enter the i student details"<<i+1;
             cout<<"enter the reg no"<<endl;
             cin>>reg;
             cout<<"enter the student name";
             cin>>name;
             cout<<"enter student m1,m2,m3 marks"<<endl;
             cin>>m1>>m2>>m3;
            }
        }
        void calculate()
        {
            for(i=0;i<n;i++)
            {
                s[i].total=s[i].m1+s[i].m2+s[i].m3;
                s[i].avg=s[i].total/3;
            }
        }
        void print()
        {
            cout<<"_____________________________________________";
            cout<<"\n regno \t name \t total \t average"<<endl;
            for(i=0;i<n;i++)
            {
               cout<<"_____________________________________________";
               cout<<s[i].reg<<s[i].name<<s[i].total<<s[i].avg;
            }
        }
}s[52];
int main()
{
    //student s[52];
    int i=0;
    s[i].get();
    s[i].calculate();
    s[i].print();
    return 0;
}