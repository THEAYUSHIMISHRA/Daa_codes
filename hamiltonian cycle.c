//Hamiltonian cycle
#include<stdio.h>
int g[10][10],n,i,m,x[10];
void main()
{
	void NextValue(int k);
	void hamiltonian(int k);
	void gread();
	gread();
	x[1]=1;
	for(i=2;i<=n;i++)
		x[i]=0;
	hamiltonian(2);	
}
void gread()
{ int j,a,b;
	printf("\nEnter the number of vertices: \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			g[i][j]=0;
	printf("Enter the no. of edges\n");
	scanf("%d",&m);
	printf("Enter the %d edges\n ",m);
	for(i=1;i<=m;i++)
	   {
	     scanf("%d%d",&a,&b);
		g[a][b]=g[b][a]=1;	
}
}
void NextValue(int k)
{
	int j;
	
	while(1)
	{
		x[k]=(x[k]+1)%(n+1);
		if(x[k]==0)
		   break;
		if(g[x[k-1]][x[k]]==1)
			for(j=1;j<=k-1;j++)
				if(x[j]==x[k])
					break;
		if(j==k)
			if((k<n)||((k==n)&&(g[x[n]][x[1]]==1)))
					break;		   
		}
	}
void hamiltonian(int k)
{
	int j;
	while(1)
	{
		NextValue(k);
		if(x[k]==0)
		     break;
	
		if(k==n)     
		{
				for(i=1;i<=n;i++)
					printf("%d",x[i]);
				printf("%d",x[1]);
				printf("\n");
	}
		else
			hamiltonian(k+1);
}
}
