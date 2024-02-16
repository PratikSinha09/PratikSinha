#include<stdio.h>
int main() {
    float r,ar,vol;
    printf("Enter radius: ");
    scanf("%f",&r);

    ar=4*3.14*r*r;
    vol=(4/3)*3.14*r*r*r;

    printf("\nArea of the sphere is: %.2f",ar);
    printf("\nVolume of the sphere is: %.2f",vol);

    return 0;
}