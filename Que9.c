#include<stdio.h>
int main()
{
    int n;
    int temp;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("The elements in the reverse order are ");
    for(int i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}