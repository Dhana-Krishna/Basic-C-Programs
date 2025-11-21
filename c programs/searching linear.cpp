#include<stdio.h>
int main()
{
	int a[100],i,key,n,found=0,position=-1;
	printf("how many elements?");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements to search : ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			found=1;
			position=i;
			break;
		}
	}
	if(found==1)
	printf("Element is found at index %d",position);
	else
	printf("Element is not found");
	return 0;
}
