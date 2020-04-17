#include<stdio.h>
int main()
{
    int t;
    int n,m;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%d %d\n",&n,&m);
    
    if(n%2==0||m%2==0)
{
    printf("YES\n");
}
else
{
    printf("NO\n");
}
}
    
}