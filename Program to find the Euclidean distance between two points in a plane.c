#include<stdio.h>
void main()
{
float a,b,c,d;
printf("enter the points");
scanf("%f%f%f%f",&a,&b,&c,&d);
float distance=sqrt(Pow((c-a),2)+Pow((d-b),2));
printf("Enter the distance=%f",distance);
}