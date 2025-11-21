#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100] = "Aditya";
    char s2[100] = "Aditya";
    int i, flag = 0;
    for(i=0;s1[i] != '\0';i++)
    {
        if (s1[i] != s2[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("%d",flag);
    else
        printf("%d",flag);
    return 0;
}
