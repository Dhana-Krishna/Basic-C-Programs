#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Temparature In Fahrenheit : ");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)/1.8;
	printf("Temperature in celsius:%2f",celsius);
	return 0;
}
