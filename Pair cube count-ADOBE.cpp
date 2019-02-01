#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int T,N,a,b,count;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		count=0;
		cin>>N;
		for(a=1;a<50;a++)
		{
			for(b=0;b<50;b++)
			{
				if((pow(a,3)+pow(b,3))==N)
				{
					count++;
				}
				else if((pow(a,3)+pow(b,3))>N)
				{
					break;
				}
				
			}
		}
		cout<<count<<endl;
	}

}
