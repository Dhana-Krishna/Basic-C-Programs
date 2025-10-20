#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	printf("\n the bigger number is : %d",d);
	return 0;
}
