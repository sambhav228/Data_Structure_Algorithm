#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int t;
cin>>t;
while(t--)
{
long long int n;
cin>>n;

long long int arr[n];
int arr1[1001]={0};
int arr2[1001]={0};

for (int i = 0; i < n; i++) {
cin>>arr[i];
arr1[arr[i]]++;
}
int flag=0;
for(int i=0;i<=1000;i++){
if(arr1[i]>0){
arr2[arr1[i]]++;
}
}
for(int i=0;i<=1000;i++){
if(arr2[i]>1){
flag=1;
}
}
for(int i=0;i<n;i++){
while(arr[i]==arr[i+1] && i<n-1){
i++;
}
for(int j=i+1;j<n;j++){
if(arr[i]==arr[j]){
flag=1;
break;
}
}
}
if(flag==1){
cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
}
}
return 0;
}