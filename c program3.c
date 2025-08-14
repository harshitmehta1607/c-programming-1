#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter your gross salary:");
scanf("%f",&a);
b = a*1.07;
c = a*1.05;
if (a>10000)
printf("Your net salary is:%f",b);
else
printf("Your net salary is:%f",c);
return 0;


}
