/* Create a class Alpha having two private data member’s x and y of float type. Define the following
   public member functions:
   a)1-arg constructor to initialize both members to same value being passed
   b)2-arg constructor to initialize both members with arguments being passed
   c)getX() method to return the value of x
   d)getY() method to return the value of y
   e)Overload the -= and /= assignment operators to perform the operation on the objects of Alpha in the following way:
   i)A -= B means: A.x = A.x + 0.5*B.x and A.y = A.y + 0.5*B.y
   ii)A /= B means: A.x = (A.x + B.x) / (A.y + B.y) and A.y = (A.x - B.x) / (A.y - B.y) 
  In main function create and initialize values for three objects of Alpha O1, O2 & O3. Calculate &
  print the values of all three objects before and after the operation O1 -= O2 /= O3.*/
#include<iostream>
using namespace std;
class alpha
{
    private:
       float x,y;
    public:
        alpha(float a)
        {
            x=a;
            y=a;
        }
        alpha(float b,float c)
        {
            x=b;
            y=c;
        }
        friend void operator +(alpha &A,alpha &B)
        {
           A.x = A.x+(0.5*B.x);
           A.y = A.y+(0.5*B.y);
        }
        friend void operator /(alpha &A,alpha &B)
        {
            A.x =(A.x + B.x)/(A.y + B.y);
            A.y=(A.x - B.x)/(A.y - B.y);
        }
        friend void operator *(alpha &A,alpha &B)
        {
            A.x =(A.x / B.x)*(A.y / B.y);
            A.y=(A.x / B.x)*(A.y / B.y);
        }
        float getx()
        {
            float a;
            a=x;
            return a;
        }
        float gety()
        {
            float b;
            b=y;
            return b;
        }
};
int main()
{
    int op;
    float res,res1,res2,res3,a,b,c;
    cout<<"\n Enter the a,b,c values"<<endl;
    cin>>a>>b>>c;
    alpha A(a),B(b,c);
    cout<<"\n Enter your operation";
    cout<<"\n 1.Addition \n 2.Division \n 3.Multiplication"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
          A+B;
          break;
        case 2:
          A/B;
          break;
        case 3:
          A*B;
          break;
    }
    res=A.getx();
    res1=A.gety();
    cout<<"\n x value after operation  ="<<res;
    cout<<"\n y value after operation  ="<<res1;
    return 0;
}