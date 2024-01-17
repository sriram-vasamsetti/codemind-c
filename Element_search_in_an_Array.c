#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    int count=0;
    scanf("%d",&x);
    for(int i=0;i<n;i++){
    if(arr[i]==x){
        count=count+1;
        break;
    }
    }
if(count==1){printf("True");}
else{printf("False");}
    
}