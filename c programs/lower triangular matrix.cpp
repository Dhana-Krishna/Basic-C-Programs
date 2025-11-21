#include<stdio.h>
int main()
{
	int i,j,m,n,sum=0;
	printf("Enter no.of rows and colums :");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("Enter matrix elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix elements :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n Lower triangular matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d\t",a[i][j]);
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
	return 0;
}
