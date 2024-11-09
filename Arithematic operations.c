//A C program to perform arithematic operations 
#include <stdio.h>
int main()
{
    int x,y;
    int sum,div,mul,sub,mod;
    printf("Enter 1st number:");
     scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);
    sum=x+y;
    div=x/y;
    mul=x*y;
    sub=x-y;
    mod=x%y;
    printf("\nSum=%d\tDivision=%d\tMultiplication=%d\tSubtraction=%d\tModular Division=%d",sum,div,mul,sub,mod);
    return 0;
    
}
