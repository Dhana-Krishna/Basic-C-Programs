#include<stdio.h>
#define PI 3.14
int main()
{
	float radius,area;
	printf("Enter radius of circle (in cm) :");
	scanf("%f",&radius);
	area=PI*radius*radius;
	printf("Area of circle : %f\n",area);
	return 0;
}
