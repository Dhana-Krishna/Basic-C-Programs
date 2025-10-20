#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	c=((a>b)?(a):(b));
	printf("\n the bigger number is : %d",c);
	return 0;
}
