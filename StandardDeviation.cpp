/*Create a base class average to find the sum and average of 10 numbers,member variables array of n(a[n]),sum,avg and member functions. 
    1)Get numbers- To get the value of N and array
    2)Calculate-To calculate the sum and average of numbers in array a
    3)Display function to display sum and average.
    create a new class standard derivation by inheriting the features of average and include the member function called calculate to calculate the standard derivation of members in array a and another function called display function to display standard derivation. use method overiding to calculate the display the results.
         standard deviation=root((1/N)sigma(0 to n-1)(Xi-mue)^2),where mue=average;*/
#include<iostream>
#include<cmath>
using namespace std;
class average
{
    protected:
       int n,a[50],i,sum=0;
       float avg;
    public:
       void get_numbers()
       {
           cout<<"\n Enter the array size"<<endl;
           cin>>n;
           cout<<"\n Enter the array numbers"<<endl;
           for(i=0;i<n;i++)
           {
                cin>>a[i];
           }
       }
       void calculate()
       {
           for(i=0;i<n;i++)
           {
               sum=sum+a[i];
           }
           avg=sum/n;
       }
       void display()
       {
           cout<<"\n sum of array"<<sum;
           cout<<"\n average "<<avg;
       }
};
class standarddeviation:public average
{
    protected:
        float sd,rem;
    public:
        void calculate()
        {
            rem=0;
            for(i=0;i<n;i++)
            {
                rem=rem+pow((a[i]-avg),2);
            }
            sd=sqrt(rem/n);
        }
        void display()
        {
            cout<<"\n Standard Deviation for given numbers ="<<sd;
        }
};
int main()
{
    standarddeviation s;
    s.get_numbers();
    s.average::calculate();
    s.calculate();
    s.average::display();
    s.display();
    return 0;
}