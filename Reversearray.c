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
    // int temp=arr[0]
    for(int i=0;i<a/2;i++){
        int temp1=arr[i];
        arr[i]=arr[a-i-1];
        arr[a-i-1]=temp1;
    }
    printf("After reverse array\n");
    for(int i=0;i<a;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}