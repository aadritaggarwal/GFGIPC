#include<bits/stdc++.h>
using namespace std;
int main()
{
	float T,N,M,s,f_term;
	double r,square;
	long long int term;
	cin>>T;
	for(long long int i=0;i<T;i++)
	{
		cin>>s>>M>>N;
		r=M/s;
		
		square=pow(r,N-1);
		
		f_term=s*square;
		term=f_term;
		if(f_term-term>=0.9)
		{
			cout<<ceil(f_term)<<endl;
		}
		else
		{
			cout<<floor(f_term)<<endl;
		}
		
	}
}
