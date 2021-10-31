#include<iostream>
using namespace std;

class Student{
public:
int rollNo;
long int phoneNo;
string Address;
};
int main()
{
Student std1,std2;
std1.rollNo=100;
std1.phoneNo=9007865432;
std1.Address="Bhaniyawala,Dehradun";

std2.rollNo=120;
std2.phoneNo=9548430311;
std2.Address="Miyawala,Dehradun";

cout<<"student 1..."<<"\n";
cout<<"Student's Roll No.: "<< std1.rollNo <<"\n";
cout<<"Student's Phone No.: "<< std1.phoneNo <<"\n";
cout<<"Student's Address.: "<< std1.Address <<"\n\n";
cout<<"\n";

cout<<"student 2..."<<"\n";
cout<<"Student's Roll No.: "<< std2.rollNo <<"\n";
cout<<"Student's Phone No.: "<< std2.phoneNo <<"\n";
cout<<"Student's Address.: "<< std2.Address <<"\n";

return 0;
}

