#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter the array elements ");
    for(int i=0;i<10;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<10;i++)
        sum=sum+arr[i];
    printf("The avarage of the array is %f",sum/10.0);
}