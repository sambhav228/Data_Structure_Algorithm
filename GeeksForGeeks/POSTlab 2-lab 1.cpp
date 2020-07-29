//POSTlab 2---lab 1
//KLU_180031058_SAMBHAV KUMAR THAKUR

#include <bits/stdc++.h> 
using namespace std; 

string one[] 
	= { "", "one ", "two ", "three ", 
		"four ", "five ", "six ", 
		"seven ", "eight ", "nine ", "ten ", 
		"eleven ", "twelve ", "thirteen ", 
		"fourteen ", "fifteen ", "sixteen ", 
		"seventeen ", "eighteen ", "nineteen " }; 

string ten[] 
	= { "", "", "twenty ", 
		"thirty ", "forty ", 
		"fifty ", "sixty ", 
		"seventy ", "eighty ", 
		"ninety " }; 

string numToWords(int n, string s) 
{ 
	string str = ""; 

if (n > 19) 
str += ten[n / 10] + one[n % 10]; 
else
str += one[n]; 

if (n) 
str += s; 

return str; 
} 

string convertToWords(int n) 
{ 
string out; 

out += numToWords((n / 10000000), "crore "); 

out += numToWords(((n / 100000) % 100), "lakh "); 

out += numToWords(((n / 1000) % 100), "thousand "); 

out += numToWords(((n / 100) % 10), "hundred "); 

	if (n > 100 && n % 100) 
		out += "and "; 

out += numToWords((n % 100), ""); 

	return out; 
} 

void sortArr(int arr[], int n) 
{ 
vector<pair<string, int> > vp; 

for (int i = 0; i < n; i++) { 
vp.push_back(make_pair( 
convertToWords(arr[i]), arr[i])); 
} 

sort(vp.begin(), vp.end()); 

for (int i = 0; i < vp.size(); i++) 
cout << vp[i].second << " "; 
} 

int main() 
{ 
	int arr[] = { 12, 10, 102, 31, 15 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	sortArr(arr, n); 

	return 0; 
} 
