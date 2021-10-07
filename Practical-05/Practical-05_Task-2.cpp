#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void char_function()
{
char a='K';
cout<<"The character is: "<<a<<endl;
cout<<"The size of character datatype is :"<<sizeof(a)<<endl;
}
void bool_function()
{
bool b=true;
cout<<"The bool is "<<b<<endl;
cout<<"The size of bool datatype is:"<<sizeof(b)<<endl;
}
void short_function()
{
unsigned short c=6000;
cout<<"Unsigned short is "<<c<<endl;
cout<<"The size of short datatype is: "<<sizeof(c)<<endl;
}
void int_function()
{
int d=6;
cout<<"Integer is: "<<d<<endl;
cout<<"The size of int datatype is: "<<sizeof(d)<<endl;
}
void long_function()
{
unsigned long e=90000;
cout<<"long integer is: "<<e<<endl;
cout<<"The size of long int datatype is: "<<sizeof(e)<<endl;

}
void float_function()
{
float f=4.987654211111;
cout<<"Float value is: "<<f<<endl;
cout<<"The size of float datatype is: "<<sizeof(f)<<endl;
}
void double_function()
{
double g=5.9453222211111111555;
cout<<"Double value is: "<<g<<endl;
cout<<"The size of double datatype is: "<<sizeof(g)<<endl;
}
void long_double_function()
{
long double h=8.976555542311198643211;
cout<<"long double value is: "<<h<<endl;
cout<<"The size of long double datatype is: "<<sizeof(h)<<endl;
}
void wchar_t_function()
{
wchar_t i=L'T';
cout<<"Wide character is: "<<i<<endl;
cout<<"The size of wide character datatype is: "<<sizeof(i)<<endl;
}
int main()
{

char_function();
bool_function();
short_function();
int_function();
long_function();
float_function();
double_function();
long_double_function();
wchar_t_function();
return 0;
}
