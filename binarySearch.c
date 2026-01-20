#include<stdio.h>
// int binary_search(int arr[], int x, int low, int high);
void main()
{
int i,n;

printf("Enter number of Element : ");
scanf("%d",&n);

printf("Enter %d number of element : ",n);
int arr1[n];
for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
 }
printf("Current Array : ");
for(i=0;i<n;i++){
    printf("%d\t",arr1[i]);
 }

 int x;
printf("\n Enter Element to be search : ");
scanf("%d",&x);

 int size=sizeof(arr1)/sizeof(arr1[0]);
 int result;
 result=binary_search(arr1,x,0,size-1);

 if(result == -1){
    printf("\n Element not found");
 }
 else{
    printf("\n Element %d found at index %d ",x,result);
 }
 getch();
}

int binary_search(int arr[],int x,int low,int high)
{
    int mid;
    while(low<=high)
    {
        mid =(low+high)/2;
        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
            low=mid+1;
        }
        else if (x<arr[mid]){
            high=mid-1;
        }
    }
    return -1;
}