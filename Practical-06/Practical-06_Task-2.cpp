#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char a[50];
bool b=true;
cout<<"Enter a string:"<<endl;
cin.getline(a,50);
for(int i=0;i<strlen(a);i++)
{
if(a[i]!=a[strlen(a)-i-1])
{
b=false;
break;
}
}
if(b)
{
cout<<"Inputed string is pallindrome"<<endl;
}
else
{
cout<<"Inputed string is not pallindrome"<<endl;
}
return 0;
}
