#include<stdio.h>
int main()
{
float sal,com;
printf("Enter salary");
scanf("%f",&sal);
if(sal<=6000)
com=0.0;
else if(sal<=18000)
com=0.03*sal;
else if(sal<=33000)
com=0.06*sal;
else if(sal<=50000)
com=0.09*sal;
else
com=0.15*sal;
printf("Commission %f ",com);
getch();
}
