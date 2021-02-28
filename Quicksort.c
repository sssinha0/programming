#include<stdio.h>
int partation(int arr[],int l,int h);
void quicksort(int arr[],int l,int h){
    if(l<h){
        int j=partation(arr,l,h);
        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}
int partation(int arr[],int l,int h){
    int pivot,i,j;
    pivot=arr[l];
    i=l;
    j=h;
    while(j>i){
       while (arr[i]<=pivot)
       {
           /* code */
           i++;
       }
       
        while (pivot<arr[j])
        { 
            j--;
            /* code */
        }
        
        if(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        
    }
    int temp=arr[j];
    arr[j]=pivot;
    arr[l]=temp;
    return j;
}
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
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
return 0;
}