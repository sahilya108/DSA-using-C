#include<stdio.h>
void main()
{
	int a[20];
	int x;
	int i,found=0;
	int n=sizeof(a)/sizeof(a[0]);

	printf("Enter 20 Elements : ");
	for(i=0;i<n;i++){
		scanf("\t%d",&a[i]);
	}

	printf("Enter number which you want to search : ");
	scanf("%d",&x);

	for(i=0;i<n;i++)
	{
		if(x==a[i])
		{
			printf("Element %d found at position %d ",x,i);
			found=1;
			break;
		}
	}
	if(found==0)
	{
		printf("Element not in list");
	}
}