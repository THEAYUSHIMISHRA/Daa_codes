//gcolouring
#include<stdio.h>
int x[10],G[10][10],n,m,ne,i;
void main()
{
	void Gcolouring(int k);
	void gread();
	gread();
	for(i=1;i<=n;i++)
		x[i]=0;
	Gcolouring(1);	
}
/*void gread() //DYNAMIC
{
	int j;
	printf("Enter the no. of vertices: ");
	scanf("%d",&n);
	printf("enter the no. of colours: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
	{
		printf("\n enter no. of vertices adjacent to %d ",i);
		scanf("%d",&j);
		while(j!=-1)
		{
			G[i][j]=G[j][i]=1;
			scanf("%d",&j);
		}
	}
}*/
void gread()
{
	int i,a,j,b;
	printf("Enter the no. of vertices: ");
	scanf("%d",&n);
	printf("enter the no. of colours: ");
	scanf("%d",&m);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			G[i][j]=0;
	printf("enter the no. of edges: ");
	scanf("%d",&ne);
	printf("enter all the %d edges: ",ne);
	for(i=1;i<=ne;i++)
	{
		scanf("%d%d",&a,&b);
		G[a][b]=G[b][a]=1;
		}	
}
void NextValue(int k)
{
	int j;
	while(1)
	{
		x[k]=(x[k]+1)%(m+1);;
		if(x[k]==0)
			break;
		for(j=1;j<=k-1;j++)
			if(G[k][j]==1)
				if(x[k]==x[j])
					break;
		if(j==k)
			break;				
	}
}
void Gcolouring(int k)
{
	while(1)
	{
		NextValue(k);
		if(x[k]==0)
			break;
		if(k==n)
		{
			printf("\n");
			for(i=1;i<=n;i++) 
				printf("%d ",x[i]);  
			}
		else		                 
			Gcolouring(k+1);
	}
}