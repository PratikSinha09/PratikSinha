#include<stdio.h>
int main() {
    int x,years,months,weeks,days;
    printf("Enter number of days: ");
    scanf("%d",&x);
    years=x/365;
    x=x-(365*years);
    months=x/30;
    x=x-(30*months);
    weeks=x/7;
    x=x-(7*weeks);
    printf("years=%d \nmonths=%d \nweeks=%d \ndays=%d",years,months,weeks,x);
    return 0;

}