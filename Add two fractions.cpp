#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T,num1,num2,den1,den2,LCM,a,b,div,gcd,z,x,k;
	double div1,div2;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>num1>>den1>>num2>>den2;
	}
	if(den1==den2)
	{
		b=den1;
		a=num1+num2;
		
	}
	else if(den1>=den2)
	{
		if(den2%den1==0)
		{
			LCM=den2;
			div=LCM/den1;
			a=div*num1+num2;
			b=LCM;
		}
		else
		{
			LCM=den1*den2;
			div1=(double)LCM/(double)den1;
			div2=(double)LCM/(double)den2;
			a=div1*num1+div2*num2;
			b=LCM;
		}
	}
	else
	{
		if(den1%den2==0)
		{
			LCM=den1;
			div=LCM/den2;
			a=div*num2+num1;
			b=LCM;
		}
		else
		{
			LCM=den1*den2;
			div1=(double)LCM/(double)den1;
			div2=(double)LCM/(double)den2;
			a=div1*num1+div2*num2;
			b=LCM;
		}
		
	}
	k=__gcd(a,b);
	a=a/k;
	b=b/k;
	cout<<a<<"/"<<b<<endl;
}

