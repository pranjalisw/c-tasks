#include<stdio.h>
 int main()
{
  //Variable Declaration
 int x; 
 // Receiving choice from user
 printf("Enter any number from 1 to 5 \n");
 scanf("%d",&x);
 //switch case block
 switch (x) 
  { 
   case 1 : printf("Food item: Pasta \nPrice: Rs. 179");
   break; 
   case 2 : printf("Food item: Pizza \nPrice: Rs. 239");
   break; 
   case 3 : printf("Food item: Berger \nPrice: Rs. 129");
   break; 
   case 4 : printf("Food item: French Fries \nPrice: Rs. 99");
   break; 
   case 5 : printf("Food item: Sandwich \nPrice: Rs. 150");
   break; 
   default : printf("Invalid Choice\n");
  } 
return 0;
}
