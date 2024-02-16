#include<stdio.h>
#include<math.h>

int main() {
    float a,b,c;
    printf("Enter the value of a,b and c: ");
    scanf("%f %f %f",&a,&b,&c);

    float d=(b*b)-(4*a*c);

    if(d>=0) {
        float r1=(-b-sqrt(d))/(2*a);
        float r2=(-b+sqrt(d))/(2*a);

        printf("Its roots are %.1f and %.1f",r1,r2);
    }
    else
        printf("Roots are imaginary");
    
    return 0;
}