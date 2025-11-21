#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter first matrix elements: \n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	printf("\nFirst matrix is:\n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter second matrix elements: \n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&b[i][j]);
		}
	}
	printf("\nSecond matrix is:\n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		c[i][j]=a[i][j]*b[i][j];
    		scanf("%d",&c[i][j]);
		}
		
	}
	printf("\nMultiplication of the matrix is:\n");
	for(i=0;i<3;i++)
    {
    	for(j=0;j<3;j++)
    	{
    		printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
