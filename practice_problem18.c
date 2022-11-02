#include<stdio.h>
int main(){

    int N,sum=0,count;
    int a;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        count=0;
        for(int j=0;j<3;j++){
            scanf("%d",&a);
            count+=a;
        }
        if(count>=2){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}