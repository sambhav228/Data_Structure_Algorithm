#include<stdio.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        long int num;
        long int sum1,i,sum2;
        scanf("%ld",&num);
        long int a_1[num];
        for(i=0;i<num;i++)
        {
            scanf("%ld",&a_1[i]);
        }
        sum1=0;
        for(i=0;i<num;i++)
        {
            sum1=sum1+a_1[i];
        }
        sum2=sum1-num+1;
        printf("%ld\n",sum2);
    }
}
