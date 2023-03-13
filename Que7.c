//Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int n,first=0,second=0;
    printf("Enter the size of the array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {

        if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
    }
    printf("The second largest element in the array is %d",second);
}