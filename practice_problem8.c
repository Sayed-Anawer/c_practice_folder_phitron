#include <stdio.h>

int main(){
int a,b,i; 
scanf("%d %d", &a, &b);
i=1;
while(i<10){
    if(a*3 > b*2){      
        printf("%d",i);
        break;
    }
    else{
        a = a*3;
        b = b*2;
        i++;
    }
}
return 0;
}