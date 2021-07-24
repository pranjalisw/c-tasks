#include<stdio.h>
int main()
{   
    // variable declaration
	int marks;
	//Taking input from user
	printf("Enter Marks\n");
	scanf("%d",&marks);
	// checking condition using multiple if else statement
	if(marks>= 85 && marks<=100)
	{
		printf("You have Got Grade A");
	}
	else 
	if(marks>= 70 && marks<=84)
	{
		printf("You have Got Grade B");
	}
	else 
	if(marks>= 55 && marks<=69)
	{
		printf("You have Got Grade C");
	}
	else 
	if(marks>= 40 && marks<=54)
	{
			printf("You have Got Grade D");
	}
	else 
	if(marks<=40)
	{
			printf("You have Got Grade F");
	}
	
	return 0;
}
