#include<stdio.h>
void main()
{ 
float a,b,c;
printf("Enter two numbers");
scanf("%f%f",&a,&b);
c=a+b;
printf("Sum=%f\n",c);
c=a-b;
printf("Difference=%f\n",c);
c=a*b;
printf("Product=%f\n",c);
c=a/b;
printf("Divide=%f\n",c);
}