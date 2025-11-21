#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s1[100]="Aditya";
	char s2[100];
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];

	}
			printf("%s",s2);
	
	return 0;
}
