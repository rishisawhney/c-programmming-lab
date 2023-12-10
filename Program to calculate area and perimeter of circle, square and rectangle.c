#include<stdio.h>
void main()
{
float r;
printf("Enter the radius");
scanf("%f",&r);
float area,peri;
area=3.14*r*r;
peri=2*3.14*r;
printf("Area of circle=%.2f\n",area);
printf("Perimeter of circle=%.2f\n",peri);
float s;
printf("Enter the value of s");
scanf("%f",&s);
area=s*s;
peri=4*s;
printf("Area of square=%f\n",area);
printf("Perimeter of square=%f\n",peri);
float l,b;
printf("Enter the length and breadth");
scanf("%f%f",&l,&b);
area=l*b;
peri=2*(l+b);
printf("Area of rectangke=%f\n",area);
printf("Perimeter of rectangle=%f\n",peri);
}