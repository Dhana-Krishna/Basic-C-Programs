#include<stdio.h>
int main()
{
	int x=50;
	printf("\nsize of the variable x is : %d",sizeof(x));
	printf("\nsize of the integer data type is : %d",sizeof(int));
	printf("\nsize of the character data type is : %d",sizeof(char));
	printf("\nsize of the float data type is : %d",sizeof(float));
	printf("\nthe address of x is %d",&x);
	return 0;
}
