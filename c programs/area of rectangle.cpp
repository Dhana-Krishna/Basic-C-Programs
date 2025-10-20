#include<stdio.h>
int main()
{
	float length,width,area;
	printf("Enter length&width of rectangle (in cm) :");
	scanf("%f%f",&length,&width);
	area=length*width;
	printf("Area of rectangle : %f cm^2\n",area);
	return 0;
}
