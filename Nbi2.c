//NEWTON BACKWARD INTERPOLATION

#include<stdio.h>
#include <math.h>
int main()
{
int n,h,i;
float x[20],y[20][1];
float u,u1,a,f,fact=1;
printf("Enter the value of number of observation");
scanf("%d",&n);
printf("Enter the value of x :  ");
for(int i=1;i<=n;i++)
{
scanf("%f",&x[i]);
}
printf("Enter the value of y :   ");
for(int i=1;i<=n;i++)
{
 scanf("%f",&y[i][1]);
}
    a=y[1][1];
    printf("Enter the interval you want to find");
    scanf("%f",&f);
    h=x[2]-x[1];
    printf("The interval difference is %d\n",h);
    u=(f-x[n])/h;
    u1=u;
    for(int j=2;j<=n;j++)
    {
        for(int i=1;i<=(n-j)+1;i++)
        {
            y[i+1][j]=y[i+1][j-1]-y[i][j-1];
            }
            }
            for(int j=1;j<=n;j++)
            {
             for(int i=1;i<=(n-j)+1;i++)
             {
                }
                printf("\n");
                }
                    i=1;
                for(int j=2;j<=n;j++)
                {
                    a=a+((u1*y[i][j])/fact);
                    u1=u1*(u+(j-1));
                    fact=fact*j;
                    }
                    printf("\n Value of f(%0.2f) is %0.2f \n",f,a);
                    }

           
                
