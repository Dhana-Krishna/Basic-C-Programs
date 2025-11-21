#include<string.h>
#include<stdio.h>
int main()
{
	int i;
	char s[100]="Aditya";
	for(i=0;s[i]!='\0';i++)
	{
		if (s[i]>='a' && s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("%s",s);
	return 0;
}
