/*Create a base class called shape having two member functions getdata to initialize base class data members and pure virtual member function called display area to compite and display the area of the geometrical object.Derive two specific classes triangle and rectangle from the base class using this three classes and rectangle from the base class using this three classes design a program that will accept dimension of a triangle or rectangle interactively and display the result.*/
#include<iostream>
using namespace std;
class shape
{
    protected:
       int l,b;
    public:
        void getdata()
        {
            cout<<"\n Enter the length and breadth of rectangle"<<endl;
            cin>>l>>b;
        }
        void get_data()
        {
            cout<<"\n Emter the base and height of triangle"<<endl;
            cin>>l>>b;
        }
        virtual void calculate()=0;
        virtual void display_area()=0;
};
class triangle:public shape
{
    protected:
       float A;
    public:
        void calculate()
        {
            A=0.5*l*b;
        }
        void display_area()
        {
            cout<<"\n Area of traingle="<<A;
        }
};
class rectangle:public shape
{
    protected:
       float A1;
    public:
        void calculate()
        {
            A1=l*b;
        }
        void display_area()
        {
            cout<<"\n Area of rectangle"<<A1;
        }
};
int main()
{
    int op;
    cout<<"\n Enter your option";
    cout<<"\n 1.Traingle \n 2.Rectangle"<<endl;
    cin>>op;
    shape *s;
    triangle t;
    rectangle r;
    switch(op)
    {
        case 1:
            s=&t;
            s->shape::get_data();
            s->calculate();
            s->display_area();
            break;
        case 2:
            s=&r;
            s->shape::getdata();
            s->calculate();
            s->display_area();
            break;
    }
    return 0;
}