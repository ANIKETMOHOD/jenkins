#include<stdio.h>
 
int main() {
   int a, b;
   printf("\nEnter two numbers: ");
   scanf("%d %d", &a, &b);
 
   printf("Addition of two numbers %d and %d is %d\n",a,b,a+b);
   printf("Subtraction of two numbers %d and %d is %d\n",a,b,a-b);
 
   return(0);
}
