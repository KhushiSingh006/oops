#include <iostream>
using namespace std;
namespace first{
int add(int a,int b)
{
return (a+b);
}
}
namespace second{
float add(float a,float b)
{
return (a+b);
}
}

int main()
{
float result,x,y;
cout<<"Enter two numbers"<<endl;
cin>>x>>y;
cout<<first::add(x,y)<<endl;
cout<<second::add(x,y)<<endl;
return 0;
}
