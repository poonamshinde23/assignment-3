/*3) Write a program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
*/

#include<stdio.h>
int main()
{
int num,sum=0,digit;
printf("enter the number");
scanf("%d",&num);

while(num!=0)
{
digit = num % 10;
sum = sum+digit;
num = num/10;
}
printf("9+3+6+2 =%d\n",sum);
return 0;
}
