#include<stdio.h>
#include<string.h>
int main()
{
	char s[50]="Aditya";
	int c,l,i;
	l=strlen(s);
	for (i=0;i<=l/2;i++)
	{
		c=s[i];
		s[i]=s[l-1-i];
		s[l-1-i]=c;
	}
	printf("%s",s);
	return 0;
}
