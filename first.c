#include <stdio.h>

int main(){
    float radius,area;
    const  float PI=3.14;
    printf("enter radius:");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("%f",area);

    float length,area1;
    printf("\n enter length:");
    scanf("%f",&length);
    area1=length*length;
    printf("%f",area1);

    float base,height,area2;
    printf("enter base:");
    scanf("%f",&base);
    printf("enter height:");
    scanf("%f",&height);
    area2=(0.5*base*height);
    print("%f",area2);

    #define pi=3.14;
    float r,perimeter;
    printf("enter r:");
    scanf("%f",&r);
    perimeter=2*pi*radius;
    printf("%f",perimeter);

    float p,rate,time,si;
    printf("enter p:");
    scanf("%f",&p);
    printf("enter rate:");
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    si=(p*rate*time)/100;
    printf("%f",si);
    
    return 0;
}