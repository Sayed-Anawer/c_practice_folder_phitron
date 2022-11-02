#include<stdio.h>
int main(){

    int N,sum=0,count;
    int arr[3];
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        count=0;
        for(int j=0;j<3;j++){
            scanf("%d",&arr[j]);
            count+=arr[j];
        }
        if(count>=2){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}