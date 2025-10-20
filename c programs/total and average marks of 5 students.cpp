#include<stdio.h>
int main()
{
	int English,Maths,Science,Psychology,History,total;
	float average;
	printf("Enter the marks of English, Maths, Science, Psychology and History :\n");
	scanf("%d%d%d%d%d",&English,&Maths,&Science,&Psychology,&History);
	total=English+Maths+Science+Psychology+History;
	average=total/5;
	printf("Total marks of student:%d\n",total);
	printf("Average marks of student:%f\n",average);
	return 0;
}
