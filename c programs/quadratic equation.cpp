#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imaginarypart;
	printf("Enter a,b&c values :");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a==0)
	{
		printf("Not a quadratic equation (a should not be zero)");
	}
	discriminant=b*b-4*a*c;
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("root1=%.2lf and root2=%.2lf",root1,root2);
	}
	else if(discriminant==0)
	{
		root1=root2=-b/(2*a);
		printf("root1=root2=%.2lf",root1);
	}
	else
	{
		realpart=-b/(2*a);
		imaginarypart=sqrt(-discriminant)/(2*a);
		printf("root1=%.2lf+%.2lfi and root2=%.2lf-%.2lfi",realpart,imaginarypart,realpart,imaginarypart);
	}
	return 0;
}
