#include<stdio.h>
int main() {
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    x>y? (x>z? printf("maximum of three is %d",x):printf("maximum of three is %d",z)):(y>z? printf("maximum of three is %d",y):printf("maximum of three is %d",z));
    return 0;
}