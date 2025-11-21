#include<string.h>
#include<stdio.h>
int main()
{
	char str[100];
	int c;
	printf("Enter any string");
	gets(str);
	c=strlen(str);
	printf("%d",c);
	return 0;
}
