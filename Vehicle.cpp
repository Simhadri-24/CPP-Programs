/*Create a class Vehicle with the following attributes: Maker's Name, engine number,
fuel used, and vehicle cost. Get these details by using get_vehicle_data and display the
information using put _vehicle_data member functions. Create pure virtual functions
called calculate_life_time_tax() to calculate the lifetime tax of the vehicles and also
calculate reg_fees() to collect the registration fees at the Road Transport Office.
Derive classes, Commercial, Government, and Own_Board by using the base class
Vehicle. Each derived class has life tax and registration fees as its properties.
In the main() function, create an array of pointers for the base class and objects of
derived classes and also calculate the life tax and registration fees for every vehicle as
follows.
Registration fees             Vehicle type                     Life tax
1. Commercial vehicle       15% of vehicle cost                Rs. 5000
2. Government vehicle             5%                           Rs. 5000
3. Own board vehicle             13%                           Rs. 6000*/
#include<iostream>
#include<cstring>
using namespace std;
class vehicle 
{
    protected:
       int engine_number,fuel_cost,vehicle_cost;
       string name;
    public:
        void get_vehicle_data(int i)
        {
            cout<<"\n Enter vehicle "<<i+1<<" details";
            cout<<"\n Enter the Engine number"<<endl;
            cin>>engine_number;
            cout<<"\n Enter the Makers name"<<endl;
            cin>>name;
            cout<<"\n Enter the fuel cost"<<endl;
            cin>>fuel_cost;
            cout<<"\n Enter the vehicle cost"<<endl;
            cin>>vehicle_cost;
        }
        void put_vehicle_data(int i)
        {
            cout<<"\n Vehicle "<<i+1<<" details";
            cout<<"\n Maker's Name       ="<<name;
            cout<<"\n Engine number      ="<<engine_number;
            cout<<"\n Fuel cost          ="<<fuel_cost;
            cout<<"\n Vehicle cost       ="<<vehicle_cost;
        }
        virtual void calculate_life_time_tax()=0;
        virtual void calculate_reg_fees()=0;
        virtual void display()=0;
};
class commercial:public vehicle
{
    private:
       float c;
    public:
       void calculate_life_time_tax()
       {
           c=(15.0/100.0)*vehicle_cost;
       }
       void calculate_reg_fees()
       {
           c=c+5000.0;
       }
       void display()
       {
           cout<<"\n tax  ="<<c;
       }
};
class government:public vehicle
{
    private:
       float g;
    public:
       void calculate_life_time_tax()
       {
           g=(5/100)*vehicle_cost;
       }
       void calculate_reg_fees()
       {
           g=g+5000;
       }
       void display()
       {
           cout<<"\n tax  ="<<g;
       }
};
class own_board:public vehicle
{
    private:
       float o;
    public:
       void calculate_life_time_tax()
       {
           o=(13/100)*vehicle_cost;
       }
       void calculate_reg_fees()
       {
           o=o+6000;
       }
       void display()
       {
           cout<<"\n tax  ="<<o;
       }
};
int main()
{
    int op,n,i=0;
    cout<<"\n Enter the no of vehicles"<<endl;
    cin>>n;
    vehicle *v[n];
    commercial c[n];
    government g[n];
    own_board o[n];
    cout<<"\n 1.commercial vehicle \n 2.government vehicle \n 3.own board vehicle";
    cout<<"\n Enter your option"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
        {
           for(i=0;i<n;i++)
           {
               v[i]=&c[i];
               v[i]->get_vehicle_data(i);
           }
           for(i=0;i<n;i++)
           {
               v[i]->calculate_life_time_tax();
               v[i]->calculate_reg_fees();
           }
           for(i=0;i<n;i++)
           {
               v[i]->put_vehicle_data(i);
               v[i]->display();
           }
           break;
        }
        case 2:
        {
          for(i=0;i<n;i++)
           {
               v[i]=&g[i];
               v[i]->get_vehicle_data(i);
           }
           for(i=0;i<n;i++)
           {
               v[i]->calculate_life_time_tax();
               v[i]->calculate_reg_fees();
           }
           for(i=0;i<n;i++)
           {
               v[i]->put_vehicle_data(i);
               v[i]->display();
           }
           break;
        }
        case 3:
           for(i=0;i<n;i++)
           {
               v[i]=&o[i];
               v[i]->get_vehicle_data(i);
           }
           for(i=0;i<n;i++)
           {
               v[i]->calculate_life_time_tax();
               v[i]->calculate_reg_fees();
           }
           for(i=0;i<n;i++)
           {
               v[i]->put_vehicle_data(i);
               v[i]->display();
           }
           break;
        return 0;
    }
}