//merging of 2 arrays
#include<stdio.h>
int a[20],n,b[20],m,c[20];
void main()
{
	void merge(int *,int,int *,int);
	void readar(int *,int *);
	void writear(int *,int );
	readar(a,&n);
	readar(b,&m);
    merge(a,n,b,m);
	writear(c,m+n);
}
void readar(int a[],int *n)
{
	int i;
	printf("enter no.of elements in array");
	scanf("%d",n);
	printf("enter elements of array");
	for(i=1;i<=*n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void merge(int a[],int n,int b[],int m)
{
	int i,j,h,p;
	i=1;
	j=1;
	h=1;
	while((i<=n)&&(j<=m))
    	if(a[i]<b[j])
    	{
    		c[h]=a[i];
    		i=i+1;
    		h=h+1;
		}
		else
		{
			c[h]=b[j];
			j=j+1;
			h=h+1;
		}
	if(j>n)
		for(p=i;p<=n;p++)
		{
			c[h]=a[p];
			h=h+1;
		}
	else
		for(p=j;p<=m;p++)
		{
			c[h]=b[p];
			h=h+1;
		}			
}
void writear( int a[],int n)
{
	int i;
	printf("sorted array is:");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}