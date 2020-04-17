#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int txt,n,j,a1[6],i,m;
	char s[100][1000];
	scanf("%d",&txt);
	while(txt--)
	{
	    for(i=0;i<6;i++)
	    {
	        a1[i]=0;
	    }
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	        scanf("%s",s[i]);
	    }
	    for(i=0;i<n;i++){
	        for(j=0;j<strlen(s[i]);j++)
	        {
	            if(s[i][j]=='c') 
	            a1[0]++;
	            else if(s[i][j]=='o') 
	            a1[1]++;
	            else if(s[i][j]=='d') 
	            a1[2]++;
	            else if(s[i][j]=='e') 
	            a1[3]++;
	            else if(s[i][j]=='h') 
	            a1[4]++;
	            else if(s[i][j]=='f') 
	            a1[5]++;
	        }
	    }
	    a1[0]=a1[0]/2;
	    a1[3]=a1[3]/2;
	    m=a1[0];
	    for(i=0;i<6;i++)
	    {
	        if(a1[i]<m) 
	        m=a1[i];
	    }
	    printf("%d\n",m);
	}
	return 0;
}