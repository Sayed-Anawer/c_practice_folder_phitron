#include <stdio.h>
#include<string.h>
int main(){
int n,l;
char ch[100];
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%s",ch);
    l=strlen(ch);
    if(l>10){
        printf("%c%d%c",ch[0],l-2,ch[l-1]);
    }
    else printf("%s",ch);
    printf("\n");
}

    return 0;
}

