#include<stdio.h>
int main()
{
	char op;
	double first, second;
	
	printf("Enter an operator(+ - * /) :");
	scanf(" %c",&op);
	
	printf("Enter two operands :");
	scanf("%lf %lf",&first,&second);
	
	switch(op)
	{
		case '+':
        printf("%.1lf + %.1lf = %.1lf\n",first,second,first+second);
        break;
        case '-':
        printf("%.1lf - %.1lf = %.1lf\n",first,second,first-second);
        break;
        case '*':
        printf("%.1lf * %.1lf = %.1lf\n",first,second,first*second);
        break;
        case '/':
        if(second==0)
        printf("Error!Division by zero\n");
        else
        printf("%.1lf / %.1lf = %.1lf\n",first,second,first/second);
        break;
        default:
        printf("Error!Operator is not correct\n");
	}
	return 0;
}
