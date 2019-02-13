 long long int dist1=1e9;
long long int dist2=1e9,dist=1e9;
long long int count=0;
for(long long  i=0;i<n;i++)
{
	if(x==arr[i])
	{
		for(long long  j=i;j<n;j++)
		{
			if(arr[j]==y)
			{
				count++;
				dist1=j-i;break;
			}	
		}
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]==y)
			{
				count++;
				dist2=i-j;break;
			}	
		}
		
		dist=min(dist,min(dist1,dist2));
	}
}

if(count==0)
{
return -1;
}
else
{
    return dist;
}



