//union and find
#include<stdio.h>
int parent[20],n;
void main()
{
	void munion(int,int);
	int find(int);
	void WeightedUnion(int,int);
	int collapsefind(int i);
	int ch,i,j,k,m;
	printf("Size of array\n");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=1;i<=n;i++)
	    parent[i]=-1;
	do
	{
		printf("\n1) Union\n");
		printf("2) Find\n");
		printf("3) Weighted Union\n");
		printf("4) Collapsing Find\n");
		printf("5) Display\n");
		printf("6) Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: 
				{
					printf("enter the representative of twe set:");
			        scanf("%d%d",&i,&j);  //i considered as parent and j as child
			        k=find(i);
			        m=find(j);
			        if(k==m)
			           printf("Not possible");
			        else 
					   munion(k,m);
					break;
					}
			case 2 :{
					printf("Enter the element");
					scanf("%d",&i);
					k=find(i);
					printf("Representative is %d",k);	
					break;
					}
			case 3:{
				    printf("enter the representative of two set:");
			        scanf("%d%d",&i,&j);  //i considered as parent and j as child
			        k=collapsefind(i);
			        m=collapsefind(j);
			        if(k==m)
			           printf("Not possible");
			        else 
					   WeightedUnion(k,m);
					break;
			}
			case 4:{
					printf("Enter the element");
					scanf("%d",&i);
					k=collapsefind(i);
					printf("Representative is %d",k);	
					break;
					}		
			case 5: 
			{
					for(i=1;i<=n;i++)
			            printf("%d ",parent[i]);
					break;
			}
		
		}
	}
		while(ch!=6);    
}
void munion(int i,int j)
{
	parent[j]=i;
}
int find(int i)
{
	int j;
	j=i;
	while(parent[j]>=0)
	     j=parent[j];
	return j;     
}
void WeightedUnion(int i,int j)
{
	int count;
	count=parent[i]+parent[j];
	if(parent[i]>parent[j]) // j as heavier
	{
		parent[i]=j;
		parent[j]=count;
	}
	else
	{
		parent[j]=i; //both r equal
		parent[i]=count; //i as parent
	}
}
int collapsefind(int i)
{
	int store;
	int r=i;
	while(parent[r]>=0)
	    r=parent[r];
	while(i!=r)
	{
		store=parent[i];
		parent[i]=r;
		i=store;
	}
	return r;    
}