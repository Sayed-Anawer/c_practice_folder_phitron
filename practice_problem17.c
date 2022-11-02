/**
You will be given an positive integer N and after that an integer array  of size N. Then you will be given Q which refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to add the value to that index. After all of the queries print the values
*/

#include<stdio.h>
int main(){

    int N,Q,index,value;
    int arr[N];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&Q);
    
    for(int i=0;i<Q;i++){
        scanf("%d %d", &index,&value);
        arr[index] += value;
    }
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}