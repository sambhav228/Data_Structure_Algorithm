#include <iostream>
using namespace std;

int main() 
{
	int T;
	cin>>T;
	while(T--)
	{
		int R1,C1,K1,RES;
		int A,S,D,F0;
		cin>>R1>>C1>>K1;
		
		R1=R1-1;
		C1=C1-1;
		int F1,F2,F3,F4;
		F1=R1;
		F2=7-R1;
		F3=C1;
		F4=7-C1;
		if(F1>=K1) A=K1;
		else A=F1;
		if(F2>=K1) S=K1;
		else S=F2;
		if(F3>=K1) D=K1;
		else D=F3;
		if(F4>=K1) F0=K1;
		else F0=F4;
		
		RES=(A+S+1)*(D+F0+1);
		cout<<RES<<endl;
	}
	return 0;
}