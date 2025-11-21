#include<stdio.h>
int main()
{
	int i,j,n,temp;
	int a[]={16,18,3,87,1};
	n = sizeof(a) / sizeof(a[0]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n Sotred array is :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
