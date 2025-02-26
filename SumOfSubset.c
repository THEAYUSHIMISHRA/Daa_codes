//SUM OF SUBSETS
#include<stdio.h>
int w[10], x[10],n,m,i;
void main()
{
	void SumOfSubset(int s,int k,int r);
	int sum;
	printf("Enter the size ");
	scanf("%d",&n);
	printf("Enter the capacity ");
	scanf("%d",&m);
	printf("Enter the weight");
	for(i=1;i<=n;i++)
		scanf("%d",&w[i]);
	sum=0;	
	for(i=1;i<=n;i++)
		sum=sum+w[i];
	SumOfSubset(0,1,sum);		
}
void SumOfSubset(int s,int k,int r)
{
	x[k]=1;
	if(s +w[k]==m)
	{
		for(i=1;i<=k;i++)
		{
			printf("%d ",x[i]);
			printf("\n");
		}
	}
	else
		if((s+w[k]+w[k+1]<=m))
			SumOfSubset(s+w[k],k+1,r-w[k]);
	if((s+r-w[k]>=m)&&(s+w[k+1]<=m))
	{
			x[k]=0;
			SumOfSubset(s,k+1,r-w[k]);		
	}
}