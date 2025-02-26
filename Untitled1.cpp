#include<stdio.h>
int main()
{
	int p[10],w[10],n;
	float x[10];
	int m,j;
	float tp;
	void readar(int *,int *);
	void readar(int p[],int *n);
	void knapsack(int n,int p[],int w[],int m,float x[],float *tp);
	readar(p,&n);
	readar(w,&n);
	printf("enter the capacity");
	scanf("%d",&m);
	knapsack(n,p,w,m,x,&tp);
	for(j=1;j<=n;j++)
		printf("%0.2f\t",x[j]);
	printf("total profit is %0.2f:",tp);
}
void readar(int p[],int *n)
{
	int i;
	printf("enter no.of elements in array");
	scanf("%d",n);
	printf("enter elements of array");
	for(i=1;i<=*n;i++)
	{
		scanf("%d",&p[i]);
	}
}
void knapsack(int n,int p[],int w[],int m,float x[],float *tp)
{
	float u;
	int i;
	u=m;
	for(i=0;i<=n;i++)
		x[i]=0;
		*tp=0;
	for(i=1;i<=n;i++)
		if(w[i]>u)
			break;
		else
		{
			x[i]=1;
			u=u-w[i];
			*tp=*tp+p[i];
		}
	if(i<=n)
	{
		x[i]=u/w[i];
		*tp=*tp +(p[i]*x[i]);
	}
}