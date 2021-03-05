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
    int sum=arr[0];
    for(int i=1;i<a+1;i++){
        for(int j=0;j<a;j++){
            int total=0;
            for(int k=j;k<i;k++){
                total=total+arr[k];
            
            }
           
            
        }
    }
    printf("Maximum subarray is %d",sum);
}