/*Create a class called Admission. Include data members such as Name, Application
number, cut-off marks and phone numbers . Create an array of objects for 10
students. Include member function get) to get the details and sort() function to sort
the students according to cut-off marks. Write the sorted list into the file RankList.dat.
Display the Rank list of students by reading the content of file.*/
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
class Admission
{
    private:
      int appno,m,i,j;
      long int phno;
      string name;
    public:
      void get(int i)
      {
          cout<<"\n Enter student "<<i+1<<" details";
          cout<<"\n Enter the Name "<<endl;
          cin.ignore();
          getline(cin,name);
          cout<<"\n Enter the Application number"<<endl;
          cin>>appno;
          cout<<"\n Enter the total marks"<<endl;
          cin>>m;
          cout<<"\n Enter the phone number"<<endl;
          cin>>phno;
      }
     static void sort(Admission *a,int n,int i)
      {
          int t,j=0;
          for(i=0;i<n-1;i++)
          {
            for(j=0;j<n-i-1;j++)
            {
              if(a[j].m<a[j+1].m)
              {
                  Admission t=a[j];
                  a[j]=a[j+1];;
                  a[j+1]=t;
              }
            }
          }
      }
      void disp(Admission* a,int i)
      {
          cout<<"\n Name                 ="<<name;
          cout<<"\n Application number   ="<<appno;
          cout<<"\n cut off marks        ="<<m;
          cout<<"\n phone number         ="<<phno;
      }
};
int main()
{
    int n,i=0;
    cout<<"\n Enter the no of students"<<endl;
    cin>>n;
    Admission a[n];
    for(i=0;i<n;i++)
    {
       a[i].get(i);
    }
    Admission::sort(a,n,i);
    fstream disp("RankList.txt");
    disp.open("RankList.txt",ios::in|ios::out|ios::binary|ios::trunc);
    for(i=0;i<n;i++)
    {
        disp.write((char*)&a[i],sizeof(a[i]));
    }
    cout<<"\n Your object is successfully written to the file";
    for(i=0;i<n;i++)
    {
        disp.read((char*)&a[i],sizeof(a[i]));
        a[i].disp(a,i);
    }
    disp.close();
    return 0;
}