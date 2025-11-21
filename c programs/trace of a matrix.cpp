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
	if(m==n){
	
	for(i=0;i<m;i++)
	{
		sum+=a[i][i];
	}
	printf("Trace of the matrix : %d",sum);}
	else
	{
	printf("Trace is not possible-Not a square matrix");
}
	return 0;
}
