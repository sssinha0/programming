#include<stdio.h>
int main(){
    int a;
    printf("enter the size of array");
    scanf("%d",&a);
    int arr[a];
    printf("enter the element in array");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("MIn is=%d and max is=%d",min,max);
}