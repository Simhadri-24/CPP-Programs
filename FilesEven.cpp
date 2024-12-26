/*Write a program to read N numerical values from the user. Ine
store those N numerical values in a fle (INPUT.txt). Read eacn value
one by one from the INPUT.txt file. Write all the even numbers in
EVEN.txt file and odd numbers in ODD.txt file. Finally print the
ODD.txt and EVEN.txt file content.*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int a[10],n,i=0,b[10],c[10],op,j=0,k=0;
    cout<<"\n Enter the array size"<<endl;
    cin>>n;
    cout<<"\n Enter the Array Numerical values"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ofstream get("INPUT.txt",ios::binary);
    for(i=0;i<n;i++)
    {
        get.write((char*)&a[i],sizeof(a[i]));
    }
    cout<<n<<" numerical values are stored succesfully in INPUT file"<<endl;
    ifstream in("INPUT.txt",ios::binary);
    for(i=0;i<n;i++)
    {
        in.read((char*)&a[i],sizeof(a[i]));
        if(a[i]%2==0)
        {
            ofstream even("EVEN.txt",ios::binary); 
            b[j]=a[i];
            even.write((char*)&b[j],sizeof(b[i]));
            even.close();
            j++;
        }
        if(a[i]%2==1)
        {             
            ofstream odd("ODD.txt",ios::binary);
            c[k]=a[i];
            odd.write((char*)&c[k],sizeof(c[k]));
            odd.close();
            k++;
        }
    }
    cout<<"\n Even and odd Numerical numbers are stored successfully"<<endl;
    cout<<"1.EVEN \n 2.ODD"<<endl;
    cout<<"Enter your option"<<endl;
    cin>>op;
    switch(op)
    {
        case 1:
          {
           ifstream even("EVEN.txt",ios::binary);
           cout<<"Even Numerical values are"<<endl;
           for(i=0;i<j;i++)
           {
                even.read((char *)&b[i],sizeof(b[j]));
                cout<<b[i]<<" ";
           }
           break;
          }
        case 2:
          {
           ifstream odd("ODD.txt",ios::binary);
           cout<<"Odd Numerical values are"<<endl;
           for(i=0;i<k;i++)
           {
              odd.read((char *)&b[i],sizeof(b[j]));
              cout<<c[i]<<" ";
           }
           break;
          }
    }
    return 0;
}