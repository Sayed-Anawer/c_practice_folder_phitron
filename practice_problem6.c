#include<stdio.h>
int main(){
    int input_chocolate,packet_chocolate,remaining_packet,total_chocolate=0,extra_chocolate;
    printf("Enter the number of chocolate: ");
    scanf("%d", &input_chocolate); // 175
    total_chocolate= input_chocolate; // 175
    packet_chocolate= input_chocolate; // 175
   
    while(packet_chocolate>=4){ // 175>=4
       total_chocolate += packet_chocolate/4; // 175+175/4= 175+43=218 
       packet_chocolate = packet_chocolate/4 + packet_chocolate%4; // 175/4+175%4= 43+3=46 
    }

    printf("Total chocolate: %d\n", total_chocolate);
    }