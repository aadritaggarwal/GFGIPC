#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll int T,N,D;
	cin>>T;
	for(ll int i=0;i<T;i++)
	{
		cin>>N>>D;
		ll A[N+D];
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(ll j=0;j<D;j++)
		{
			A[N+j]=A[j];
		}
		for(ll k=D;k<(N+D);k++)
		{
			cout<<A[k]<<" ";
		}
		cout<<endl;
	}
}
