//undirected graph
#include<stdio.h>
int g[10][10],m,n;
void main()
{
	void gread();
	void gwrite();
	 gread();
	 gwrite();
}
void gread()
{
	int i,j,b,a;
	printf("Enter the no. of vertices");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++) //n for vertex
		      g[i][j]=0;
	printf("Enter the no. of edges") ;
	scanf("%d",&m);     //m for edges 
    printf("Now enter the %d edges",m);
    for(i=1;i<=m;i++)
    {
    	scanf("%d%d",&a,&b);
    	g[a][b]=g[b][a]=1;
	}
}
void gwrite()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d",g[i][j]);
		printf("\n");	
	}
}
void bfs(int v)
{
	int q[20],f-=
	int u=v;
	visited[u]=1;
	printf("%d ",u);
	printf("%d "w);
	write(1)
	{
		for(w=1;w<=n;w++)
			if(g[u][w]==1)
				if(visited[w]==0)
				{
					visited[w]=1;
					printf("%d "w);
					insert(q,&f,&v,w);
				}
		if(f==0)
			break;
		else
			u=qdelete(q,&f,&r);			
	}
}