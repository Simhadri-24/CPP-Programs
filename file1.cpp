int main()
{
char ch;
int j;
double d;
string str1;
ifstream infile(“fdata.txt”); 
infile >> ch >> j >> d >> str1 ;
cout << ch << endl << j << endl<< d << endl<< str1 << endl;
return 0;
}