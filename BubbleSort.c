#include<stdio.h>
void main()
{
	int i,j;
	int a[]={6,54,2,66};
	int n=sizeof(a)/sizeof(a[0]);

    printf("Current Array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}

	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}