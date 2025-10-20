#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter Temperature In Celsius :");
	scanf("%f",&celsius);
	fahrenheit=(celsius*1.8)+32;
	printf("Temperature In Fahrenheit:%2f",fahrenheit);
	return 0;
}
