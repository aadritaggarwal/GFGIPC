#include<bits/stdc++.h>
using namespace std;
void prime_num(int N);
int main()
{
	long long int T, N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		prime_num(N);
	}
	return 0;
}
void prime_num(int N)
{
	bool prime[N+1];
	long long int p=2;
	memset(prime,true,sizeof(prime));
	for(p=2;p*p<N;p++)
	{
		if(prime[p]==true)
		{
			for(int j=p*p;j<N;j+=p)
			{
				prime[j]=false;
			}
		}
	}
	for(int k=2;k<N;k++)
	{
		if(prime[k])
		{
			cout<<k<<" ";
		}
	}
	cout<<endl;
	
	
}
