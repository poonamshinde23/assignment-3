/*Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
*/

#include<stdio.h>

int main()
{

int num , rem, rev=0;
printf("enter the numbet\n ");
scanf("%d",&num);
int temp=num ;
 
while(num != 0)
{
rem = num % 10;
rev = rev * 10 + rem;
num = num /10;
}

printf("rev number is %d \n",rev);

if(temp==rev)
{
printf("number is numeric palindrome\n");
}
else 
{
printf("number is not numeric palindrome\n");
}
return 0;

}






;



