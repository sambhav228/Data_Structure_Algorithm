//sambhav228

#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
	long n;
	cin>>n;
	long a[n],b[n],c[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];

	}
	for(int j=0;j<n;j++)
	{
		cin>>b[j];

	}
	for(int k=0;k<n;k++)
	{
		c[k]=b[k]/a[k];
	}
std::cout<< *std::min_element(c,c+n)<<endl ;


}
