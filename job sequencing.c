//job sequence
#include<stdio.h>
void jsd(int *d,int n,int *j,int *k)
{
	int r,i,q;
	j[1]=1;
	d[0]=j[0]=0;
	*k=1;
	for(i=2;i<=n;i++)
	{
		r=*k;
		while((d[j[r]]>d[i])&& (d[j[r]]!=r))
			r=r-1;
		if((d[j[r]]<=d[i])&&(d[i]>r))
		{
			for(q=*k;q>=r+1;q--)
				j[q+1]=j[q];
			j[r+1]=i;
			*k=*k+1;	
		}
	}
}
void main()
{
	int i;
	int d[20],j[20],n,k,p[20],tp=0;
	printf("enter the no. of jobs ");
	scanf("%d",&n);
	printf("enter the job deadline elements");
	for(i=1;i<=n;i++)
		scanf("%d",&d[i]);
	printf("enter the profit elements");
	for(i=1;i<=n;i++)
		scanf("%d",&p[i]);
	jsd(d,n,j,&k);
	for(i=k;i>=1;i--)
		printf("\n %d",j[i]);
	for(i=1;i<=k;i++)
		tp=tp+p[j[i]];
		printf("\n profit is %d",tp);
}