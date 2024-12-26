/*Create a class student with attributes name, register number, department, an array for storing 5
  subject marks, total. In main(), find the student who has scored the highest total using the ‘>’
  operator(friend) to compare the objects and display the details of the student. Include necessary
  member functions and constructors.*/
#include <iostream>
using namespace std;
#include <string>
class Student
{
   private:
       int reg_no,marks[5],total;
       string name,department;
   public:
       Student(string na, int no,string de, int ma[]) 
       {
        name=na;
        reg_no=no;
        department = de;
        for(int i=0;i<5;i++)
        {
            marks[i] = ma[i];
        }
        calculateTotal();
    }

    void calculateTotal()
    {
        total = 0;
        for (int i=0;i<5;i++)
        {
            total+= marks[i];
        }
    }
    int operator>(Student& empty)
    {
        return total > empty.total;
    }

    void display()
    {
        cout<<"\n register no ="<<reg_no;
        cout<<"\n name        ="<<name;
        cout<<"\n department  ="<<department;
        cout<<"\n highest total="<<total;
    }
};

int main()
{
    int marks1[] = { 80, 85, 90, 95, 88 };
    Student s1("simhadri", 12345, "Computer Science", marks1);
    int marks2[] = { 75, 90, 85, 92, 78 };
    Student s2("hemanth", 67890, "Mathematics", marks2);
    if (s1 > s2)
    {
        s1.display();
    }
    else
    {
        s2.display();
    }
    return 0;
}