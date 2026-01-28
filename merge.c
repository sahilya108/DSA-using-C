#include<stdio.h>

void mergesort(int a[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		
		mergesort(a,left,mid);
		mergesort(a,mid+1,right);
		merge(a,left,mid,right);
	}
}
void merge(int a[],int left,int mid,int right)
{
	int i,j;
	int n1=mid-left+1;
	int n2=right-mid;
	int L[n1];
	int M[n2];
	for(i=0;i<n1;i++)
	{
		L[i]=a[left+i];
		
	}
	for(j=0;j<n2;j++)
	{
		M[j]=a[mid+1+j];
		
	}
	i=0;
	j=0;
	int key=left;
	while(i<n1 && j<n2)
	{
		if(L[i]<=M[j])
		{
			a[key]=L[i];
			i++;
		}
		else
		{
			a[key]=M[j];
			j++;
		}key++;
		
	}
	while(i<n1)
	{
		a[key]=L[i];
		i++;
		key++;
	}
	while(j<n2)
	{
		a[key]=M[j];
		j++;
		key++;
	}
}
void main()
{
	int a[]={7,5,3,1};
	int n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}