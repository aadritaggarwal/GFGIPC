#include<bits/stdc++.h>
using namespace std;
vector<long long int> prime1;
void prime(int N);
int main()

{
	long long int T,N,sum,init_sum=0;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		
		prime1.clear();
		cin>>N;
		prime(N);
		sum=accumulate(prime1.begin(),prime1.end(),init_sum);
		cout<<sum<<endl;
				
	}
	
}
void prime(int N)
{
	long long int p=2;
	bool prime[N+1];
	memset(prime,true,sizeof(prime));
	
	for(p=2;p*p<=N;p++)
	{
		for(long long int i=p*p;i<=N;i+=p)
		{
			if(prime[i])
			{
				prime[i]=false;
			}
		}
	}
	for(long long int k=2;k<=N;k++)
	{
		if(prime[k])
		{
			prime1.push_back(k);
		}
	}
}
