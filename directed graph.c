//weighted graph
#include<stdio.h>
int g[10][10],m,n;
void main()
{
	void wtread();
	void wtwrite();
	 wtread();
	 wtwrite();
}
void wtread()
{
	int i,j,b,a,wt;
	printf("Enter the no. of vertices");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++) //n for vertex
		      g[i][j]=-99 ;
	printf("Enter the no. of edges") ;
	scanf("%d",&m);     //m for edges 
    printf("Now enter the %d edges",m);
    for(i=1;i<=m;i++)
    {
    	scanf("%d%d%d",&a,&b,&wt);
    	g[a][b]=wt;
	}
}
void wtwrite()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf(" %d",g[i][j]);
		printf("\n");	
	}
}