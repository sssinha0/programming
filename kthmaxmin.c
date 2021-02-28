#include<stdio.h>
void quicksort(int arr[],int l,int h);
int paration(int arr[],int i,int j);
int main(){
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int arr[a];
    printf("enter the element in array");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,a-1);
    printf("after sorting array");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    int k;
    printf("enter the number to find kth min and max");
    scanf("%d",&k);
    printf("max value is %d and min value is %d",arr[a-k],arr[k-1]);

    return 0;
}
void quicksort(int arr[],int l,int h){
    if(l<h){
        int j=paration(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
        
    }
}
int paration(int arr[],int l,int h){
    int pivot,i,j;
    pivot=arr[l];
    i=l;
    j=h;
    while (j>i)
    {
        while(pivot>=arr[i])
            i++;
        while (pivot<arr[j])
        {
            j--;
        }
        if(j>i){
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
        
    }
    int temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;
    return j;
    
}