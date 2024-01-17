#include<stdio.h>
int main(){
    int n,sum=0,arr[n-1];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
}