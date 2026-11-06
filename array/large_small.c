//to find the largest and smallest value of an array
#include<stdio.h>

int main(void)
{
    int i,arr[5]={215,54,55,58,8},small,large;
    small=large=arr[0];
    for(i=1;i<5;i++)
    {
        if (arr[i]<small)
            small=arr[i];
        else if(arr[i]>large)
            large=arr[i];
    }
    printf("smallest = %d, largest = %d\n",small,large);
}