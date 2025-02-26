//linear queue
#include<stdio.h>
#define size 10
void main()
{
	void qinsert(int *q,int *f,int *r,int x);
	void qdelete(int *q,int *f,int *r);
	void diaplay(int *q,int *f,int *r);
	int q[size];
	int f=0,r=0,ch,data;
	do
	{
		printf("\n1. Insert\n");
		printf("\n2. Delete the elements\n");
		printf("\n3. Display\n\n");
	    printf("\n. Enter the choice\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
	    		printf("Enter the elements");
	    		scanf("%d",&data);
	    		qinsert(q,&f,&r,data);
	    		break;
			case 2:
				data=qdelete(q,&f,&r);
				printf("\n the deleted elemnts is %d",data);
				break;
			case 3:
			     display()	
		}
	}
