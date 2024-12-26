/* AGE CALCULATOR */
#include<iostream>
using namespace std;
class date
{
    private:
       int d,m,y;
    public:
       date()
         {
             d=0;
             m=0;
             y=0;
         }
         date(int a,int b,int c)
         {
             d=a;
             m=b;
             y=c;
         }
         void display()
         {
             cout<<"\n your age is "<<endl;
             cout<<"\n years   "<<y;
             cout<<"\n months  "<<m;
             cout<<"\n days    "<<d;
         }
         date compare(date s3)
         {
             date s;
             s.d=d-s3.d;
             s.m=m-s3.m;
             s.y=y-s3.y;
             if(s.m<0)
             {
                 s.y=s.y-1;
                 s.m=s.m+12;
             }
             if(s.d<0)
             {
                 if(s.m==5||s.m==7||s.m==10||s.m==12)
                 {
                     s.m=s.m-1;
                     s.d=30+s.d;
                 }
                 else if(s.m==3)
                 {
                     s.m=s.m-1;
                     s.d=s.d+28;
                 }
                 else
                 {
                     s.m=s.m-1;
                     s.d=s.d+31;
                 }
             }
             else 
             return s;
         }
};
int main()
{
    int a,b,c,a1,b1,c1;
    cout<<"\n Enter your date of birth in the format dd/mm/yyyy"<<endl;
    cin>>a>>b>>c;
    cout<<"\n Enter the today date in the format dd/mm/yyyy"<<endl;
    cin>>a1>>b1>>c1;
    date s1,s2(20,05,2023),s3(a,b,c);
    s1=s2.compare(s3);
    s1.display();
    return 0;
}