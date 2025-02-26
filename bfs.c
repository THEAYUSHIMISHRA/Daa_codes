//bfs graph //undirected
#include<stdio.h>
int g[10][10],m,n,visited[20],v;
void main()
{
	int i;
	void gread();
	void gwrite();
	void bfs(int v);
	 gread();
	 gwrite();
	 for(i=1;i<=n;i++)
	 	visited[i]=0;
	 printf("Enter the start vertex\n");
	 scanf("%d",&v);	
	 bfs(v);
}
void gread()
{
	int i,j,b,a;
	printf("Enter the no. of vertices");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++) //n for vertex
		      g[i][j]=0;*/
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

void qinsert(int *q,int *f,int *r,int x)
{
	if(*r==19)
		printf("Overflow");
	else
	{
		if(*r==0)
			*f=*r=1;
		else
			*r=*r+1;
		q[*r]=x;				
	}	
}
int qdelete(int *q,int *f,int *r)
{
	int x=-1;
	if(*f ==0)
		printf("Underflow");
	else
	{
		x=q[*f];
		if(*f ==*r)
			*f=*r=0;
		else
			*f=*f+1;	
	}
	return x;	
}
void bfs(int v)
{
	int q[20],f=0,r=0,w,u;
	u=v;
	visited[u]=1;
	printf("%d ",u);
	while(1)
	{
		for(w=1;w<=n;w++)
			if(g[u][w]==1)
				if(visited[w]==0)
				{
					visited[w]=1;
					printf("%d ",w);
					qinsert(q,&f,&r,w);
				}
		if(f==0)
			break;
		else
			u=qdelete(q,&f,&r);			
	}
}