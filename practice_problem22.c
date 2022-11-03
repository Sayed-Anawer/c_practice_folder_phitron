#include<stdio.h>
int main(){

    int N,i,arr[200003];
    scanf("%d",&N);
    long long int moves = 0;
    for(i =0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<N;i++){
        if(arr[i]<arr[i-1]){
            moves+= (arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }

    printf("%lld",moves);
    return 0;
}