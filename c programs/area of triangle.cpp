#include<stdio.h>
int main()
{
	float b,h,area;
	printf("Enter base and height of triangle (in cm) :");
	scanf("%f%f",&b,&h);
	area=(b*h)/2;
	printf("Area of Triangle : %f\n",area);
	return 0;
}
