#include<stdio.h>
int main()
{
	int n,i,factors=0;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			factors=factors+1;
		}
		else
		{
			if (factors==2)
			{
				printf("%d is a prime number",n);
			}
			else
			{
				printf("%d is not a prime number",n);
			}
		}
	}
	return 0;
}
