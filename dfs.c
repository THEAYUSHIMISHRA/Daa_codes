//dfs
#include<stdio.h>
int g[10][10],m,n,visited[20],v;
void main()
{
	int i;
	void gread();
	void gwrite();
	void dfs(int v);
	 gread();
	 gwrite();
	 for(i=1;i<=n;i++)
	 	visited[i]=0;
	 printf("Enter the start vertex\n");
	 scanf("%d",&v);	
	 dfs(v);
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
void dfs(int v)
{
	int w;
	visited[v]=1;
	printf("%d ",v);
	for(w=1;w<=n;w++)
		if(g[v][w]==1)
			if(visited[w]==0)
				dfs(w);
}
