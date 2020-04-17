#include<stdio.h>
#include<math.h>
int main()
{
	int T,i;
	scanf("%d",&T);
	long int P1,P2,K,S=0;
	for(i=1;i<=T;i++)
	{
		scanf("%ld %ld %ld",&P1,&P2,&K);
		S=P1+P2;
		if(S%(2*K)>=K)
		{
			printf("COOK\n");
		}
		else
		{
			printf("CHEF\n");
		}
		
		
	}
	return 0;
}
