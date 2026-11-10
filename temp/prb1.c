#include <stdio.h>

int main()
{
    int fact=1,i=0,num;

    printf("enter a number : ");
    scanf("%d",&num);
    again:
    i++;
    fact *=i;
    if(i<num)
    goto again;

    printf("factorial of %d : %d",num,fact);
    return 0;
}