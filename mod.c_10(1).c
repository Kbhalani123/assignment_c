// show Monday to Sunday using switch case

#include<stdio.h> 
int main() 
 { 
   int day; 
   printf("enter the number "); 
   scanf("%d",&day); 
   switch(day) 
   { 
   case 1 : printf("\n Monday"); 
   break; 
   case 2 : printf("\n Tuesday"); 
   break; 
   case 3 : printf("\n Wednesday"); 
   break; 
   case 4 : printf("\n Thursday"); 
   break; 
   case 5 : printf("\n Friday"); 
   break; 
   case 6 : printf("\n Saturday"); 
   break; 
   case 7 : printf("\n Sunday"); 
   break; 
   default : printf("\n valid number is 1 to 7   please enter the valid number."); 
    
    
   } 
   return 0; 
 } 
