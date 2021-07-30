// program in C to find the sum of digits of a number using recursion
#include<stdio.h>
int sum(int);
int main()
{
	int num,result;
	printf("Enter any Number\n");
	scanf("%d",&num);
	result=sum(num);
	printf("Sum of digits of %d is %d\n",num,result);
}
int sum (int num)
{
    if (num != 0)
    {
        return (num % 10 + sum (num / 10));
    }
    else
    {
       return 0;
    }
}
