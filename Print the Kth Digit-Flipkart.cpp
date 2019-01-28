#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,A,B,K,power,FLAG,ans;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>A>>B>>K;
		power=pow(A,B);
		FLAG=0;
		while(FLAG!=K)
		{
			ans=power%10;
			power=power/10;
			FLAG++;
		}
		cout<<ans<<endl;
		
		
	}
}
