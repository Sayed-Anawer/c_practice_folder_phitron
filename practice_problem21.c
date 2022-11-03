#include<stdio.h>
int main(){
    int N,k;
    int arr[55];
    scanf("%d %d",&N,&k);
    
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i]>=arr[k-1] && arr[i]>0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}