#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){sum=sum+1;}
    }
if(sum!=0){printf("False");}
else{printf("True");}
}