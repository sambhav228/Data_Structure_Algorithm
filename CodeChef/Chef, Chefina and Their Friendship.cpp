//@sambhav228

#include <iostream>
using namespace std;

int main() {
	
	int t;int ab=0;int ll=2*1000000;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int n=s.size();
	    ab=ab+n;
	    if(ab<=ll)
	    {
	    int i=1;int j=0;
	    string a,b,c,d;int z=0;
	    
	    while((2*i)<=n-2)
	    {
	        a=s.substr(j,i);
	        b=s.substr(j+i,i);
	        if(a==b)
	        {
	            int p=2*i;int q=(n-p)/2;
	            c=s.substr(p,q);
	            d=s.substr(p+q,q);
	            
	            if(c==d)
	            {
	                z++;
	            }
	        }
	        i++;
	    }
	    cout<<z<<endl;
	    }
	}
	return 0;
}
