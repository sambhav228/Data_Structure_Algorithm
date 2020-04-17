#include <iostream>
using namespace std;
long long int _gcd1(long long int a1,long long int b1)
{
    if((a1==0)||(b1==0))
        return 0;
        if(a1==b1)
        return a1;
        if(a1>b1)
         return _gcd1(a1-b1, b1);  
    return _gcd1(a1, b1-a1);  
}
long long int _lcm1(long long int a1, long long int b1)  
{  
    return (a1*b1)/_gcd1(a1,b1);  
}  
int main()
{
    int txt;
    cin>>txt;
    while(txt--)
    {
        long long int a1,b1;
        long long int k,n,sum,d1;
        cin>>n>>a1>>b1>>k;
        sum=_lcm1(a1,b1);
        d1=(n/a1)+(n/b1)-((n/sum)*2);
        if(d1>=k)
        cout<<"Win"<<endl;
        else
        cout<<"Lose"<<endl;
    }
}
