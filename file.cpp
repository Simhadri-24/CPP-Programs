#include<iostream>
#include<fstream>
int main()
{
char ch = 'x';
int j = 77;
double d = 6.02;
string str1 = “SASTRA”; 
ofstream outfile(“fdata.txt”); 
outfile << ch<' '<< j <<' '<< d<' '<< str1;
cout << “File written\n”;
return 0;
}