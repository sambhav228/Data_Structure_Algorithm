#include<stdio.h>
int main()
{
    int i,t,n;
    scanf("%d\n",&t);
    while(t--)
    {
        int k,j;
        int num=1;
        scanf("%d\n",&n);
       int a[n][n];
       
       for(k=0;k<n;k++)
       {
           for(i=0,j=k;(i<=k && j>=0);i++,j--)
           {
               a[i][j]=num++;
           }
           
       }
       for(k=1;k<i;k++)
       {
           for(i=k,j=n-1;(i<n&&j>=k);i++,j--)
           {
              
               
                   a[i][j]=num++;
               }
           
       }
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
             printf("%d ",a[i][j]);
            
           }
           printf("\n"); 
       }
           
       }
    }