#include<stdio.h>
void main()
{
	int a[]={9,7,6,5,4};
	int i,key,j,n;
	n=sizeof(a)/sizeof(a[0]);
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && key<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}