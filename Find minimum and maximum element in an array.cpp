#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ios_base::sync_with_stdio(false);
	ll T,N;
	cin>>T;
	while(T--)
	{
		cin>>N;
		ll A[N];
		ll min1,max1;
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}
		min1=max1=A[0];
		for(ll k=0;k<N;k++)
		{
			if(A[k]<min1)
			{
				min1=A[k];
			}
			if(A[k]>max1)
			{
				max1=A[k];
			}
		}
		
		cout<<min1<<" "<<max1<<endl;
		
	}
}
