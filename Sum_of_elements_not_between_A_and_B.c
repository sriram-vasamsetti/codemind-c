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
        if(a>arr[i]||b<arr[i]){sum=sum+arr[i];}
        }
    printf("%d",sum);
}