#include<stdio.h>
int main()
{
    int arr[10],OddSum=0,EvenSum=0;
    printf("Enter the ten numbers ");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==0)
            EvenSum=EvenSum+arr[i];
        else
            OddSum=OddSum+arr[i];
    }
    printf("The sum of odd numbers is %d and sum of even numberes is %d",OddSum,EvenSum);
}
