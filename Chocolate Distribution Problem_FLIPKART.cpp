#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(false);
	ll t,n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v;
		for(ll i=0;i<n;i++)
		{
			ll val;
			cin>>val;
			v.push_back(val);
		}
		cin>>m;
		sort(v.begin(),v.end());
		ll min=v[m-1]-v[0];
		for(ll k=1;(k+m)<n;k++)
		{
			if((v[(k+m)-1]-v[k])<min)
			{
				min=(v[(k+m)-1]-v[k]);
			}
		}
		cout<<min<<endl;
		
	}
}
