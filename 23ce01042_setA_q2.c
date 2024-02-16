#include<stdio.h>
int main() {
    int n,temp,s=0,f=1;
    printf("Enter any number: ");
    scanf("%d",&n);

    temp=n;

    while(n!=0)
    {
        int d=n%10;
        if(d==0)
            s+=1;
        else 
        {
            while(d!=0)
            {
                f*=d;
                d--;
            }
            s+=f;
        }
        n/=10;
        f=1;
    }

    if(s==temp)
        printf("It is a strong number");
    else
        printf("It is not a strong number");
    
    return 0;
}