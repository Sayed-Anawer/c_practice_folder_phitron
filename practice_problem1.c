/**************************************************************** 
 * Four players participate in the playoff tournament. The tournament is held according to the following scheme - the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.
It is known that in a match between two players, the one whose skill is greater will win.The tournament is called fair if the two players with the highest skills meet in the finals.Determine whether the given tournament is fair.

 Output YES if the tournament is fair, or NO otherwise.

 The skill of the first,second,third and fourth player is between 1-100. 
******************************************************************/

#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the skill of the first player: ");
    scanf("%d",&a);
    printf("Enter the skill of the second player: ");
    scanf("%d",&b);
    printf("Enter the skill of the third player: ");
    scanf("%d",&c);
    printf("Enter the skill of the fourth player: ");
    scanf("%d",&d);

printf("%d %d %d %d\n",a,b,c,d);

    if(a>b && c>d && a>d && c>b) printf("YES");

    else if(a<b && d>c && b>c && d>a) printf("YES");
    
    else if(a>b && d>c && a>c && d>b) printf("YES");
    
    else if(a<b && c>d && b>d && c>a) printf("YES");

    else printf("NO");    
        
    return 0;
}