#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    printf("\nEnter the principal amount: ");
    scanf("%d",&p);
    printf("\nEnter the rate of interest: ");
    scanf("%d",&r);
    printf("\nEnter the time: ");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("\nThe simple interst is: %f",si);
    return 0;
}
