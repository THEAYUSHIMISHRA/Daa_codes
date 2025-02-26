 //KNAPSACK
#include<stdio.h>
void main()
{
	int a[10],p[10],w[10],n,m;
	float x[10],tp;
	void knapsack(int n,int *p,int *w,int m,float *x,float *tp);
	void readar(int a[],int *);
	readar(p,&n);
	readar(w,&n);
	printf("Enter capacity :\n");
	scanf("%d",&m);
	knapsack(n,p,w,m,x,&tp);
	printf("Total profit is %f \n",tp);
}
void readar(int a[],int *n)
{
	int i;
	printf("Enter the size\n");
	scanf("%d",n);
	printf("Enter the elements\n");
	for(i=1;i<=*n;i++)
		scanf("%d",&a[i]);
}
		
void knapsack(int n,int p[],int w[],int m,float *x,float *tp)
{
	float u;
	int i;
	for(i=1;i<=n;i++)
	     x[i]=0; //solution vector initialised to zero initially 
	*tp=0;
	u=m;   //for later decrement of capacity
	for(i=1;i<=n;i++)
		if(w[i]>u) //capacity is full 
			break; //constraint
		else       
		{
			x[i]=1;
			u=u-w[i];
			*tp=*tp+p[i];
			}	
	if(i<=n) //remaining profit left 
	{
		x[i]=u/w[i];
		*tp= *tp+(p[i]*x[i]) ;
			}				

}