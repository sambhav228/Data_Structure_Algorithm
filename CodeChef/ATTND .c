#include<stdio.h>
#include<string.h>
int main()
{
    int txt;
    scanf("%d",&txt);
    while(txt--)
    {
        int n,i,j;
        char s1[100][100],s2[100][100];
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%s %s",s1[i],s2[i]);
        }
        for(i=1;i<=n;i++)
        {
            int cnt=0;
            for(j=1;j<=n;j++)
            {
                if(i!=j)
                {
                    if(strcmp(s1[i],s1[j])==0)
                    cnt=1;
                
                }
            }
            if(cnt==1)
            {
                printf("%s %s\n",s1[i],s2[i]);
            }
            else
            {
                printf("%s\n",s1[i]);
            }
        }
        
    }
}