//To print the tables of the numbers from 1 to 10

#include<stdio.h>

int main()
{
int i,j;

for (i = 1; i <= 10; i++)
{
  printf("Table of %d:\n",i);
}
for (j = 1; j<= 10; j++)
 {
   printf("%d * %d = %d\n",i,j,i*j);
 }
 printf("\n");

return 0;
}
