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
int result,x,y;
cout<<"Enter two numbers:";
cin>>x>>y;
result=add(x,y);
cout<<result<<endl;
return 0;
}
