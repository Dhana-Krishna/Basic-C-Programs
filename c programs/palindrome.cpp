#include<stdio.h>
int main()
{
	int n,t,sum=0,remainder;
	printf("Enter an integer :");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	if(t==sum)
	printf("%d is a palindrome number\n",t);
	else
	printf("%d is not a palindrome number\n",t);
	return 0;
}
