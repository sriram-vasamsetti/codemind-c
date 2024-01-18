#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(a>arr[i]||b<arr[i]){
            printf("%d ",arr[i]);
            sum=sum+1;
        }
        }
    if(sum==0){printf("%d",-1);}
}