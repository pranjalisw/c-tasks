include<stdio.h>
int primenum(int,int);
int main()
{
	//Variable decleration
  int num,check;
  printf("Enter any number\n");
	scanf("%d",&num);
  //function call
	check=primenum(num,num/2);
	 if (check == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
 
int primenum(int num, int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primenum(num, i - 1);
       }       
    }
}
