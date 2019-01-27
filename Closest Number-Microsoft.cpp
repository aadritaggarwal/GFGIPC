#include<iostream>
using namespace std;
int main()
{
	long long int T,N,M,s,d,f,g,h;
	cin>>T;
	for(long long int i=0;i<T;i++)
	{
		cin>>N>>M;
		s=d=f=g=h=N;
		
		if(N>0)
		{
			if(M>0)
			{
				for(long long int j=0;j<=M;j++)
				{
				s=s+j;
				d=d-j;
				if(s%M==0)
				{
					cout<<s<<endl;
					break;
				}
				else if(d%M==0)
				{
					cout<<d<<endl;
					break;
				}
				else
				{
					s=N;
					d=N;
					continue;
				}
				}
			}
			else
			{
				for(long long int j=0;j>=M;j--)
			{
				s=s+j;
				d=d-j;
				if(s%M==0)
				{
					cout<<s<<endl;
					break;
				}
				else if(d%M==0)
				{
					cout<<d<<endl;
					break;
				}
				else
				{
					s=N;
					d=N;
					continue;
				}
			}
			}
			
		}
		else if(N<0)
		{
			if(M>0)
			{
				for(long long int k=0;k<=M;k++)
			{
				g=g+k;
				h=h-k;
				
				if(h%M==0)
				{
					cout<<h<<endl;
					break;
					
				}
				else if(g%M==0)
				{
					cout<<g<<endl;
					break;
				}
				else
				{	
					g=N;
					h=N;
					continue;
				}
			}
			}
			else
			{
				for(long long int k=0;k>=M;k--)
			{
				g=g+k;
				h=h-k;
				
				if(h%M==0)
				{
					cout<<h<<endl;
					break;
					
				}
				else if(g%M==0)
				{
					cout<<g<<endl;
					break;
				}
				else
				{	
					g=N;
					h=N;
					continue;
				}
			}
			}
			
		}
		else
		{
			for(long long int l=0;l<=M;l++)
				{
					f=f+l;
					if(f%M==0)
					{
						cout<<f<<endl;
						break;
					}
					else
					{
						f=N;
						continue;
					}
				}
		}
		
		
	}
}
