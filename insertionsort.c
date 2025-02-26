//insertionsort
#include<stdio.h>
int a[20],n,b[20],m,c[20];
void main()
{
	void insertion(int *,int);
	void readar(int *,int *);
	void writear(int *,int );
	readar(a,&n);readar(b,&m);
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
void writear( int a[],int n)
{
	int i;
	printf("sorted array is:");
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
}
void insertionsort(int a[],int n);
{
	int i,j,x;
	for(i=2;i<=n;i++)
	{
		x=a[i];
		j=i-1;
		while(j>=1)&&(a[j]>x)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=x;
	}
}