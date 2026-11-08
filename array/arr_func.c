//program to pass array in a function

#include<stdio.h>
void check (int num);
int main()
{
    int arr[5],i;
    printf("enter the array elements : \n");
    for(i=0 ; i<5 ; i++)
    {
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
}
void check (int num)
{
    if(num%2==0)
    {
        printf("%d is even\n",num);
    }
    else
    {
        printf("%d is odd\n",num);
    }
}
