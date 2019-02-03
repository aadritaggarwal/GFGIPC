#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,N,sum;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		sum=1;
		cin>>N;
		for(int i=2;i<=sqrt(N);i++)
		{
			if(N%i==0)
			{
				sum+=i+N/i;
			}
		}
		if(sum==N && N!=1)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}
}
