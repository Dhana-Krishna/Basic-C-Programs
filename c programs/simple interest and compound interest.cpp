#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("Enter the principal amount(P):");
	scanf("%f",&p);
	printf("Enter time in years(T):");
	scanf("%f",&t);
	printf("Enter rate in percent(R):");
	scanf("%f",&r);
	/*calcuating simple interest*/
	si=p*r*t/100;
	/*calculating compound interest*/
	ci=p*(pow((1+r/100),t)-1);
	printf("simple interest=%f",si);
	printf("compound interest=%f",ci);
	return 0;
}
