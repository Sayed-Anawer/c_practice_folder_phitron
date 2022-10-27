// vanya and fence

#include<stdio.h>

int main(){

    int n,h,x;
    scanf("%d %d", &n, &h);

    int i = 1;
    int count = 0;
    while(i<=n){
        scanf("%d", &x);
        if(x>h){
            count+=2;
        }
        else{
            count++;
        }
        i++;
    }
    printf("%d", count);
    return 0;
}