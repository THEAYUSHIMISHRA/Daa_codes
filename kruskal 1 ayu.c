//kruskal
#include<stdio.h>
int n,m,parent[10];
typedef struct e
{
	int f,y,wt;
}edge;
edge a[20];
void main()
{
	int i,t[10][3],mincost;
	printf("Enter the number of edges :");
	scanf("%d",&m);
	printf("Enter %d edges and weight",m);
	for(i=1;i<=m;i++)
		scanf("%d%d%d",&a[i].f,&a[i].y,&a[i].wt);
	kruskal(&mincost,t);
	for(i=1;i<n;i++)
		printf("%d\t%d",t[i][1], t[i][2]);
	printf("Mincost is %d\n",mincost);	
	
			
}
void adjust(edge *a,int i,int n)
{
	int j;
	edge x;
	x=a[i];
	j=2*i;
	while(j<=n)
	{
	if(j<n)
		{
			if(a[j].wt<a[j+1].wt)
					j=j+1;
	   }
	if(a[j].wt >x.wt)
	{
		a[j/2]=a[j];
		j=2*j;
	}
	else
		break;		
	}
	a[j/2]=x;
}
void munion(int i,int j)
{
	parent[i]=j;
}
int find(int i)
{
	int j;
	j=i;
	while(parent[j]>=0)
	     j=parent[j];
	return j;     
}
void heapify(edge *a,int n)
{
	int i;
	for(i=n/2;i>=1;i--)
		adjust(a,i,n);
}
int kruskal(int *mincost,int t[10][3])
{   //a is no.of vertices and m is no. of edges
	int i,j,y,f,k;
	edge e1;
	*mincost=0;
	y=m;
	heapify(a,m);
    for(i=1;i<=n;i++)
    	parent[i]=-1;
    i=0;	
	while((i<n-1)&&(y!=0))
	{
		e1=a[1];
		a[1]=a[y];
		y=y-1;
		adjust(a,1,y);
		j=find(e1.f);
		k=find(e1.y);
		if(j!=k)
		{
			i=i+1;
			t[i][1]=e1.f;
			t[i][2]=e1.y;
			*mincost=*mincost+ e1.wt;
			munion(j,k);
		}
	}
}