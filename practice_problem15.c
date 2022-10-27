// even odds
#include <stdio.h>

int main(){

    long long int n,k,number,newNum;
    scanf("%lld %lld", &n, &k); // 999999999997 499999999999
    number = (n/2) + (n%2 !=0); // 499999999999
    if(k<=number){ // 499999999999 <= 499999999999
        newNum = 2*k - 1; // 999999999997
        printf("%lld", newNum); // 999999999997
    }
    else{ // 499999999999 > 499999999999
        newNum =2 * (k-number);
        printf("%lld", newNum); // 2 * (7-4) = 2 * 3 = 6
    }
    return 0;
}