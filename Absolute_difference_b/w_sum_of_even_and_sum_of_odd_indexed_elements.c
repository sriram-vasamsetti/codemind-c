#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=arr[1];
    int add=arr[0];
    for(int i=2;i<n;i++){
        if(i%2!=0){sum=sum+arr[i];}
        else if(i%2==0){add=add+arr[i];}
    }
if(sum>add){printf("%d",sum-add);}
else{printf("%d",add-sum);}
}