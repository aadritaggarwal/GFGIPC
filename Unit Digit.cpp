#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T,N;
	cin>>T;
	for(long long i=0;i<T;i++)
	{
		cin>>N;
		if(N==1)
		{
			cout<<1<<endl;
		}
		else if(N==2)
		{
			cout<<2<<endl;
		}
		else if(N==3)
		{
			cout<<6<<endl;
		}
		else if(N==4)
		{
			cout<<4<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}

}
