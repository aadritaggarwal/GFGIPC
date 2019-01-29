#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,N,min,rem,count;
	count=1;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N;
		long long int A[N];
		for(int j=0;j<N;j++)
		{
			cin>>A[j];
		}
		sort(A,A+N);
		min=A[0];
		
		for(int k=1;k<N;k++)
		{
			rem=A[k]%min;
			
			if(rem!=0)
			{
				
				count=0;
				break;
			}
			else
			{
				continue;
			}
			
		}
		if(count==1)
		{
			cout<<min<<endl;
		}
		else
		{
			cout<<1<<endl;
		}
	}
}
