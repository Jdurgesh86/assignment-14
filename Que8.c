#include<stdio.h>
#include<limits.h>
int main()
{
    int n,first=INT_MAX,second=INT_MAX;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {

        if(arr[i] < first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] < second && arr[i] > first)
		{
			second = arr[i];
		}	
    }
    printf("The second smallest element in the array is %d",second);
}