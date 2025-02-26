//MST USING PRIMS METHOD
#include<stdio.h>
int cost[10][10],m,n;
int pmin(int *pnear)
{
	int i=1,p,k,mindata;
	while(pnear[i]==0)
		i=i+1;
	p=i;
	mindata=cost[i][pnear[i]];
	for(k=i+1;k<=n;k++)	
		if((pnear[k]!=0)&&(cost[k][pnear[k]]<mindata))
		{
			p=k;
			mindata=cost[k][pnear[k]];
		}		
	return p;			
} 

void prims(int t[10][3],int *mincost)
{
    int near[10],i,k,j;
	near[1]=0;
	for(i=2;i<=n;i++)
		near[i]=1;
	*mincost=0;
	for(i=1;i<=n-1;i++)
	{
		j=pmin(near);
		t[i][1]=j;
		t[i][2]=near[j];
		*mincost=*mincost + cost[j][near[j]] ;
		near[j]=0;
		for(k=1;k<=n;k++)
			if((near[k]!=0)&&(cost[k][near[k]]>cost[k][j]))
				near[k]=j;				
	}		
}
void wtread()
{
	int i,j,b,a,wt;
	printf("Enter the no. of vertices");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++) //n for vertex
		      cost[i][j]=999 ;
	printf("Enter the no. of edges") ;
	scanf("%d",&m);     //m for edges 
    printf("Now enter the %d edges and weight ",m);
    for(i=1;i<=m;i++)
    {
    	scanf("%d%d%d",&a,&b,&wt);
    	cost[a][b]=cost[b][a]=wt;
	}
}

void main()
{
	int t[10][3],mincost,i;
	wtread();
	prims(t,&mincost);
	for(i=1;i<=n-1;i++)
		printf("%d %d \n ",t[i][1],t[i][2]);
	printf("Minimum Cost = %d ",mincost);	
}