/*Create a class Date with 3 integer member variables d, m and y. Define a member function called display which reads &displays the date in “01-Jan-2022” format. Also, write a function that accepts an integer value(number of days) and calculates the next date. (Ex. If the date value is 25.10.2020, then adding 10 days should give 04.11.2020). Assume that February month contains 28 days only and 365 days/year. In the main function create objects and demonstrate the output of functions with valid inputs*/
#include<iostream>
using namespace std;
class date
{
    private:
         int d,m,y,y1,d1,m1;
    public:
        void get()
        {
             cout<<"\n Enter the date "<<endl;
             cin>>d;
             cout<<"\n Enter the month"<<endl;
             cin>>m;
             cout<<"\n Enter the year"<<endl;
             cin>>y;
             cout<<"\n Enter the no of days "<<endl;
             cin>>d1;
             cout<<d<<"-"<<m<<"-"<<y<<endl;
        }
        void cal()
        {
             if(m1==01 ||m1==03 || m1==05 || m1==07 ||m1==8 || m1==10 ||m1==12)
             {
               if(d1>31)
               {
                   m1=d1/31;
                   d1=d1%31;
               }
               if(m1>31)
               {
                   y1=m1/31;
                   m1=m1%31;
               }
            }
            else if(m1==04 ||m1==06 || m1==9 ||m1==11)
            {
               if(d1>30)
               {
                   m1=d1/30;
                   d1=d1%30;
               }
               if(m1>30)
               {
                   y1=m1/30;
                   m1=m1%30;
               }
            }
            else
            {
               if(d1>28)
               {
                   m1=d1/28;
                   d1=d1%28;
               }
               if(m1>28)
               {
                   y1=m1/28;
                   m1=m1%28;
               }
            }
            d=d+d1;
            m=m+m1;
            y=y+y1;
        }
        void disp()
        {
            cout<<"\n"<<d<<"-"<<m<<"-"<<y;
        }
};
int main()
{
    date s;
    s.get();
    s.cal();
    s.disp();
    return 0;
}