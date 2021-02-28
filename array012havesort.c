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
        if(arr[i]==0)
            b++;
        if(arr[i]==1)
            c++;
        if(arr[i]==2)
            d++;
    }
    printf("%d %d %d",b,c,d);
    for(int i=0;i<a;i++){
        if(i<b){
            arr[i]=0;
        }else if(i<c+b){
            arr[i]=1;
        }else if(i<d+c+b){
            arr[i]=2;
        }
    }
    printf("after sorting\n");
    for(int i=0;i<a;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}