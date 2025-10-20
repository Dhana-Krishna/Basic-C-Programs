#include<stdio.h>
int main()
{
	int n,digit,temp,sum=0;
	printf("enter any number:");
	scanf("%d",&n);
	temp=n;
	while (temp!=0)
	{
		digit=temp%10;
		sum+=digit*digit*digit;
		temp=temp/10;
	}
	if(n==sum)
	{
		printf("%d is a armstrong number\n",n);
	}
	else
	{
		printf("%d is not an armstrong number\n",n);
	}
	return 0;
}
