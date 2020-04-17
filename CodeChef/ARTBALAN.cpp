#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long int Txt;
    cin>>Txt;
    while(Txt--)
    {
        string sam;
        cin>>sam;
        long int i,h1[26]={0},k=0,n1,min1=9999999,Sum1=0,num1=0,j;
        n1=sam.length();
        long int a1[n1];
        for(i=0;i<n1;i++)
        {
            if(h1[sam[i]-'A']==0)
            num1++;
            h1[sam[i]-'A']++;
        }
        for(i=1;i<=26;i++)
        {
            if(n1%i==0&&i<=n1)
            {
                a1[k++]=i;
            }
        }
        sort(h1,h1+26,greater<int>());
        if(h1[0]==n1||h1[0]==1)
        cout<<0<<endl;
        else{
            for(i=0;i<k;i++){
                Sum1=0;
                long int size=n1/a1[i];
                for(j=0;j<a1[i];j++)
                {
                    if(h1[j]-size<0)
                    Sum1+=(size-h1[j]);
                }
                if(Sum1<min1)
                min1=Sum1;
            }
                    cout<<min1<<endl;
        }
    }
}