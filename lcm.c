// C program to find LCM of two numbers
#include <stdio.h>

// Recursive function to return lcm of a and b
int get_lcm(int a, int b)
{
	if (a == 0)
		return b;
	return get_lcm(b % a, a);
}

// Function to return LCM of two numbers
int lcm(int a, int b)
{
	return (a / get_lcm(a, b)) * b;
}

int main()
{
	int a,b;
	printf("Enter any two number\n");
	scanf("%d%d",&a,&b);
	printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
	return 0;
}
