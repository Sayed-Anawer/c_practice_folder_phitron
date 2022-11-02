#include<stdio.h>
int main(){
    long long int N,k;
    scanf("%lld",&N);
    scanf("%lld", &k);
    for(int i=0;i<k;i++){
        if(N%10==0){
            N/=10;
        }
        else{
            N--;
        }
    }
    printf("%lld",N);
    return 0;
}