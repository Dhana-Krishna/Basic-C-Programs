#include<stdio.h>
#include<math.h>
int main()
{
	double num,root;
	printf("Enter an integer:");
	scanf("%lf",&num);
	root=sqrt(num);
	printf("The square root of %f is %lf",num,root);
	return 0;
}
