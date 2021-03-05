#include<stdio.h>
#include<stdlib.h>
int *fun (int arr[],int a);
int main(){
    int a;
    printf("enter size of array\n");
    scanf("%d ",&a);
    int arr[4];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int *n;
    n=fun(arr,a);
    for(int i=0;i<a;i++){
        printf(" %d ",arr[i]);
    }
}
int* fun(int arr[],int a){
    arr[0]=arr[1];
int* crr=malloc(sizeof(int)*a);
// printf("size of array is %d ",(int)(size(crr)));
crr[0]=arr[1];
for(int i=1;i<a;i++){
    crr[i]=arr[i];
}
// printf("size of array %ld ",sizeof(crr));
return crr;
}