#include <stdio.h>

int main(){
    float radius,area;
    const  float PI=3.14;
    printf("enter radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("%f",area);

    return 0;
}