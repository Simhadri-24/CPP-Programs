/* Create a class called input data it has two private data members data a and data b.Set the values of these two data members by using two public functions called geta and getb.Derive a class called arith_unit from input data it contains the functions add,sub,mul,div to perform arithmetic operations on data a and data b.Derive a class called logic_unit from input data if contains the functions and(&),or(|),xor(^) to perform logical operations on data a and data b.Finally derive a class all_unit from arith_unit and logic_unit class it has to perform arithmetic and logic operations according to the given choice 1 to 6 to perform set 7 operations .Write program to perform set of operations */
#include<iostream>
using namespace std;
class inputdata
{
    private:
       int a,b;
    public:
       void geta()
       {
           cout<<"\n Enter the a value"<<endl;
           cin>>a;
       }
       void getb()
       {
           cout<<"\n Enter the b value"<<endl;
           cin>>b;
       }
       friend class arith_unit;
       friend class logic_unit;
       
};
class arith_unit:public virtual inputdata
{
    protected:
       int A,S,M,D;
    public:
       void calculate()
       {
           A=a+b;
           S=a-b;
           M=a*b;
           D=a/b;
       }
};
class logic_unit:public virtual inputdata
{
    protected:
       int O,P,Q;
    public:
       void calculate1()
       {
           O=a&b;
           P=a|b;
           Q=a^b;
       }
};
class all_unit:public virtual arith_unit,public virtual logic_unit
{
    public:
    void addition()
    {
        cout<<"\n Addition    ="<<A;
    }
    void subtraction()
    {
        cout<<"\n Subtraction ="<<S;
    }
    void multiplication()
    {
        cout<<"\n Multiplication ="<<M;
    }
    void division()
    {
        cout<<"\n Division     ="<<D;
    }
    void and_operation()
    {
        cout<<"\n And  ="<<O;
    }
    void or_operation()
    {
        cout<<"\n Or   ="<<P;
    }
    void xor_operation()
    {
        cout<<"\n Xor  ="<<Q;
    }
};
int main()
{
    all_unit s;
    s.geta();
    s.getb();
    s.calculate();
    s.calculate1();
    int op;
    cout<<"\n Enter your option";
    cout<<"\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.And operation \n 6.Or operation \n 7.Xor operation"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
           s.addition();
           break;
        case 2:
           s.subtraction();
           break;
        case 3:
           s.multiplication();
           break;
        case 4:
           s.division();
           break;
        case 5:
           s.and_operation();
           break;
        case 6:
           s.or_operation();
           break;
        case 7:
           s.xor_operation();
           break;
    }
    return 0;
}