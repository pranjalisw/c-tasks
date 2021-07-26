#include <stdio.h> 
 int main() 
 { 
     int i,j,n;
	 printf("Enter the value for no. of stairs?") ;
	 scanf("%d",&n);
	 for (i = 1; i <n; i++)
	  {
	 	 for(j=0;j<i+1;j++)
	 	 {
		   printf("%d",(i+j+1)%2);
	   }
	   printf(" "); 
    }
 return 0;
 }
 
