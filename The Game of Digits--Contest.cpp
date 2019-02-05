#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll T,N,x,ans[1000];
	cin>>T;
	while(T--)
	{
		cin>>N;
		x=0;
		for(ll i=9;i>1;i--)
		{
			if(N>=10)
			{
				while(N%i==0 && N>=10)
				{
					ans[x]=i;
					N=N/i;
					x++;
				}
			}
			else
			{
				ans[x]=N;
				x++;
				break;
			}
		}
	
		if(N>=10)
		{
			cout<<-1<<endl;
			continue;
		}
		sort(ans,ans+x);
		for(ll j=0;j<x;j++)
		{
			cout<<ans[j];
		}
		cout<<endl;
	}
}
