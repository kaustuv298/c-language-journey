// to do sum of elemets in array
#include<stdio.h>

int main()
{
    int arr[5],i,sum;

    for(i=0;i<5;i++)
    {
        printf("enter value of array : ");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of array is : %d ",sum);
    return 0;
}