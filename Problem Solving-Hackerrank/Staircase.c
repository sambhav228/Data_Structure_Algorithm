//https://www.hackerrank.com/challenges/staircase/problem

#include<stdio.h>
int main()
{ int i,j,k,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<n-i+1;j++)
   {
     printf(" ");
   }
  for(k=1;k<=i;k++)
   {
     printf("#");
   }
    printf("\n");
 }
    return 0;
}
