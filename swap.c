#include<stdio.h>
int main()
{   
    // variable declaration
	int num1,num2;
	//initialization of variables num1,num2
	num1=10;
	num2=20;
	//printing numbers before swapping
	printf("Before swapping Numbers are: %d %d\n",num1,num2);
	//swapping numbers
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	//printing numbers after swapping
	printf("After swapping Numbers are: %d %d\n",num1,num2);
	return 0;
}
