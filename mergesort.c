//mergesort
#include<stdio.h>
int a[20],n;
void main()
{
	void merge(int,int,int);
	void readar(int *,int *);
	void mergesort(int ,int);
	void writear(int *,int );
	readar(a,&n);
	mergesort(1,n);
	writear(a,n);
}
void merge(int l,int m,int u)
{
	int i,j,p,h,c[20];
	i=l;
	j=m+1;
	h=l;
	while((i<=m)&&(j<=u))
    	if(a[i]<a[j])
    	{
    		c[h]=a[i];
    		i=i+1;
    		h=h+1;
    	}
    	else
    	{
    		c[h]=a[j];
    		j=j+1;
    		h=h+1;
		}
	if(j>u)
	    for(p=i;p<=m;p++)
		{
				c[h]=a[p];
				h=h+1;
		}
	else
	    for(p=j;p<=u;p++)
		{
			c[h]=a[p];
			h=h+1;
			}	
    for(p=l;p<=u;p++)
		    a[p]=c[p];
}
void mergesort(int l,int u)
{
	int m;
	if(l<u)
	{
		m=(l+u)/2;
		mergesort(l,m);
		mergesort(m+1,u);
		merge(l,m,u);
	}
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
void writear( int a[],int n)
{
	int i;
	printf("sorted array is:");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}
