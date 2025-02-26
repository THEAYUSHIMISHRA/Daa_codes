//NQueens
#include<stdio.h>
//#include<math.h>
int k,n,j,x[10],count;
void main()
{
	void NQueen(int k);
	printf("Enter the no. of queens: ");
	scanf("%d",&n);
	NQueen(1);
	printf("\nNo. of counts are : %d",count);
}
int place(int k,int i)
{
	int flag;
	flag=1;
	for(j=1;j<=k-1;j++)
	
			if((x[j]==i)||(abs(j-k)==abs(x[j]-i)))
		{
			flag=0;
			break;
		}
		return flag;
}
void NQueen(int k)
{
	int i;
	for(i=1;i<=n;i++)
	{
		if(place(k,i)==1)
		{
			x[k]=i;
			if(k==n)
			{
				printf("\n");
				count=count+1;
				for(j=1;j<=n;j++)
				{
					printf("%d ",x[j]);
					
			    }
			}
			else
				NQueen(k+1);
		}
	}
}
