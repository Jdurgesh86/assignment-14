#include<stdio.h>
int main()
{
    int n;
    printf("Enter the array size ");
    scanf("%d",&n);
    int arr[n],arr1[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
        arr1[i]=arr[i];
    printf("The copied elements in another array array ");
    for(int i=0;i<n;i++)
        printf("%d ",arr1[i]);
}