#include<stdio.h>
int main()
{
    int N,r,R;
    scanf("%d %d\n",&N,&r);
    while(N--)
    {
        scanf("%d\n",&R);
        if(R>=r)
        
            printf("Good boi\n");
        
        else
        
            printf("Bad boi\n");
    }
    return 0;
}
