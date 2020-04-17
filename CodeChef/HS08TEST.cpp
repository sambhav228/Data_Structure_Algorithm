//SAMBHAV KUMAR THAKUR
//sambhav228
//CODECHEF

#include <iostream>
using namespace std;

int main() {

int x;
double y;
cin>>x;
cin>>y;
double rem;
if(x%5==0)
{
    
    if(x<y && (x+0.5)<=y)
    {
        rem=y-x-0.5;
        cout<<rem<<endl;
    }
    else
    {
        cout<<y<<endl;
    }
    
}

else
{
    cout<<y<<endl;
}
}
