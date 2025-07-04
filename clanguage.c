#include <stdio.h>

int main(){
    float p,rate,time,SI;
    printf("enter p:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time:");
    scanf("%f",&time);
    SI=(p*rate*time)/100;
    printf("\n%f",SI);
    
    return 0;