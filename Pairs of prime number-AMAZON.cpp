#include<bits/stdc++.h>
using namespace std;
void prime(int N);
vector<int> prime1;
int main()
{
	long long int T,N;
	cin>>T;
	prime(1000);
	for(int i=0;i<T;i++)
	{
		cin>>N;
		
		for(int j=0;j<prime1.size();j++)
		{
			for(int k=0;k<prime1.size();k++)
			{
				if((prime1[j]*prime1[k])<=N)
				{
					cout<<prime1[j]<<" "<<prime1[k]<<" ";
					
					
				}
				else
				{
					break;
				}
			}
		}
		
	cout<<endl;
	}
}
void prime(int N)
{
	long long int p=2;
	long long int A[N];
	bool prime[N+1];
	memset(prime,true,sizeof(prime));
	for(p=2;p*p<=N;p++)
	{
		if(prime[p])
		{
			for(int j=p*p;j<=N;j+=p)
			{
				prime[j]=false;
			}
		}
	}
	for(int k=2;k<N;k++)
	{
		if(prime[k])
		{
			prime1.push_back(k);
		}
	}
}
