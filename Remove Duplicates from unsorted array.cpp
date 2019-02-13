#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll T,N,A[1000],counter[1000];
	cin>>T;
	while(T--)
	{	
		vector<ll> ques;
		cin>>N;
		memset(counter,0,sizeof(counter));
		for(ll i=0;i<N;i++)
		{
			cin>>A[i];
		}
		for(ll j=0;j<N;j++)
		{
			if(counter[A[j]]==0)
			{
				ques.push_back(A[j]);
				counter[A[j]]++;
			}
			
		}
		for (ll k = 0;k<ques.size();k++)
	    {
            cout << ques[k] << " ";
		}
		cout<<endl;	
	}
}
