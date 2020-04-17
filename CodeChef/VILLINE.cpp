#include <iostream>
using namespace std;

int main() {
	int n,m,i,c,x,y,p,a=0,b=0;	
	cin>>n;
    cin>>m>>c;
    
    for(i=0;i<n;i++)
    {
      cin>>x>>y>>p;
    if(y-m*x-c>0) 
     {
      a=a+p;
     
     }
     
    
     else {
        b=p+b;
     }
     }

    
if(a>b){
    cout<<a;
}
else { cout<<b;}
	return 0;
}