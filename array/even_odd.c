// to find odd and even numbers in an array
#include<stdio.h>
#define size 5
int main()
{
    int i,arr[size],even=0, odd=0;
    for(i=0; i<size; i++)
    {
        printf("enter the value for arr[%d] : ",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
        even++;
        else
        odd++;
    }
    printf("even numbers = %d, odd numbers = %d\n",even,odd);
    return 0;
}