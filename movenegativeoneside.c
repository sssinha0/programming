#include<stdio.h>
int main(){
    int a;
    int b=0,c=0,d=0;
    printf("enter the size of array");
    scanf("%d",&a);
    int arr[a];
    printf("enter the element in array");
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int k=0;
    for(int i=0;i<a;i++){
       if(k<i&&arr[i]<0){
            int temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            k++;
       }
       if(arr[i]<0)
        k++;
    }
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}