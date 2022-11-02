#include<stdio.h>
int main(){
int N,odd=0,even=0;
int arr[105];
scanf("%d",&N);

for(int i=0;i<N;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<3;i++){
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

if(even>1){
    for(int i=0;i<N;i++){
        if(arr[i]%2!=0){
            printf("%d",i+1);
        }
    }
}
else{
   for(int i=0;i<N;i++){
        if(arr[i]%2==0){
            printf("%d",i+1);
        }
    } 
}

return 0;
}