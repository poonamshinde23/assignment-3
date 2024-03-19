/*b. Reverse the number
Input: 9362
Output: 2639
*/
#include<stdio.h>
int main()
{
int num,rev=0,rem;
printf("enter the number");
scanf("%d",&num);
int temp = num;

while(num!=0)
{
rem= num%10;
rev=rev*10 + rem;
num = num /10;
}

printf("reverse number of 9362 = %d\n",rev);

return 0;

}

