// Read string from user and print it

// #include <stdio.h>

// int main(){
//     char n[100];
//     scanf("%s", n);
//     printf("%s", n);
//     return 0;
// }

// check size of string and print it

// #include <stdio.h>
// #include <string.h>

// int main(){
//     char n[100];
//     scanf("%s", n);
//     int lensize = strlen(n);
//     if(lensize > 10){
//         printf("%c%d%c",n[0],strlen(n)-2,n[strlen(n)-1]);
//     }
//     return 0;
// }

// int main(){

//     char n[100];
//     scanf("%s", n);
//     printf("%d", strlen(n));
//     return 0;
// }

// print first character and last character of string

// int main(){

//     char n[100];
//     scanf("%s", n);
//     printf("%c %c", n[0], n[strlen(n)-1]);


// Way too long words

// #include <stdio.h>
// #include <string.h>

// int main(){
//     int n;
//     scanf("%d", &n);
//     char word[n][100];
//     for(int i = 0; i<n; i++){
//         scanf("%s", word[i]);
//     }
//     for(int i = 0; i<n; i++){
//         if(strlen(word[i]) > 10){
//             printf("%c%d%c ", word[i][0], strlen(word[i])-2, word[i][strlen(word[i])-1]);
//         }
//         else{
//             printf("%s ", word[i]);
//         }
//     }
//     return 0;
// }


