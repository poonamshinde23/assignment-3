/*Write a program to find factorial of given number.
Input: 5
Output: 1 * 2 * 3 * 4 * 5 = 120
*/

#include<stdio.h>

int main()

{
 int num=5;
 int fact=1;
 int i =1;

 while(i<=num)
 {
   fact = fact *i;
   i++;
   
 }
   printf("factorial of 1*2*3*4*5=%d\n",fact);

   return 0;
}



   






























































