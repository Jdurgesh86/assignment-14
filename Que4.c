/*Write a program to find the greatest number stored in an array of size 10. Take array
values from the user.*/
#include<stdio.h>
int main()
{
    int arr[10],max=0;
    printf("Enter 10 numbers ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(max<arr[i])
            max=arr[i];
        printf("%d  %d",max,arr[i]);
    }
    printf("The greatest number in the array is %d",max);
}