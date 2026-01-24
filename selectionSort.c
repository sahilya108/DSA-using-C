#include<stdio.h>
void main()
{
    int arr[5]={10,5,12,6,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    selSort(arr,size);
    
}
void selSort(int arr1[],int size)
{
    int mid,i,j,temp=0;
    for(i=0;i<size;i++){
        mid=i;
        for(j=i+1;j<size;j++){
            if(arr1[mid]>arr1[j]){
                mid=j;
            }
        }
        temp=arr1[i];
        arr1[i]=arr1[mid];
        arr1[mid]=temp;
    }
    
    printf("sorted");
    for(i=0;i<size;i++){
        printf("%d \t",arr1[i]);
    }

}