#include<stdio.h>
int main()
{
int n,i,pos,num,a[50];
printf("Enter size of an array : ");
scanf("%d",&n);
printf("Enter array elements\n: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter position to insert : ");
scanf("%d",&pos);
printf("Enter new element : ");
scanf("%d",&num);
for(i=n-1;i>=pos-1;i--)
{
	a[i+1]=a[i];
}
a[pos-1] = num;
printf("\n Resultant array is: ");
for(i=0;i<=n;i++)
{
printf("%d\n",a[i]);
}
return 0;
}

