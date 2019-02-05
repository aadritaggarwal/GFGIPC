#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll largestPrimeFactor(ll N);
bool isPrime(ll N);
ll max(ll a,ll b);
int main()
{
	ll int T,N,product,unit_digit;
	cin>>T;
	for(ll int i=0;i<T;i++)
	{
		cin>>N;
		if(isPrime(N))
		{
			cout<<N<<endl;
		}
		else
		{
			cout<<largestPrimeFactor(N)<<endl;
		}
	}
}
ll largestPrimeFactor(ll N)
{
	ll max_factor=2;
	for(ll i=2;i<=sqrt(N);i++)
	{
		if((N%i)==0)
		{
			if(isPrime(N/i))
			{
				max_factor=max(max_factor,N/i);
			}
			else if(isPrime(i))
			{
				max_factor=max(max_factor,i);
			}
		}
	}
	return max_factor;
}
bool isPrime(ll N)
{
	if(N==1)
	{
		return false;
	}
	
	for(ll i=2;i<=sqrt(N);i++)
	{
		if((N%i)==0)
		{
			return false;
			break;
		}
	}
	return true;
}
ll max(ll a,ll b)
{
	if(a>b)
		return a;
	return b;
}

