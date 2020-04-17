#include <iostream>
using namespace std;

int main() {
    int txt;
    cin>>txt;
    while(txt--)
    {
        int num1,a1[10000],b1[10000],k=0,i;
        cin>>num1;
        for(i=1;i<=num1;i++)
        {
            cin>>a1[i];
        }
          for(i=1;i<=num1;i++)
        {
            cin>>b1[i];
        }
        for(i=1;i<=num1;i++)
        {
            if(i>=2&&i<=num1-1&&(b1[i]>a1[i-1]+a1[i+1]&&(b1[i]>k)))
            {
                k=b1[i];
            }
            if((i==num1)&&((b1[i]>a1[num1-1]+a1[1])&&(b1[i]>k)))
            {
                  k=b1[i];
            }
            if((i==1)&&((b1[i]>a1[2]+a1[num1])&&(b1[i]>k)))
            {
               k=b1[i];
            }
            
        }
        if(k==0)
        {
            k=-1;
        }
        cout<<k<<endl;
    }
    return 0;
}