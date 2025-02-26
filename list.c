//unweighted using dynamic
#include<stdio.h>
int g[10][10],m,n;
void main()
{
  //  void gread();
//	void gwrite();
	void wread();
	void gwrite();
//	gread();
//	gwrite();
	wread();gwrite();
}
void gread()
{
	int i,j;
	printf("Enter the no. of vertices: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter no. of vertices adjacent to %d ",i);
		scanf("%d",&j);
		while(j!=-1)
		{
			g[i][j]=g[j][i]=1;
			scanf("%d",&j);
		}
	}
}
void wread()
{
	int i,j,wt;
	printf("Enter the no. of vertices: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter no. of vertices adjacent to %d ",i);
		scanf("%d",&j); //check if -1
		while(j!=-1)
		{
			scanf("%d",&wt);
			g[i][j]=g[j][i]=wt;
			scanf("%d",&j);
		}
	}
}
void gwrite()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",g[i][j]);
		printf("\n");	
	}
}
