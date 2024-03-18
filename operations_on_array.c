#include<stdio.h>
int main(){
    int arr[25];
    int n,sum=0,max=0,min=99;
    printf("Enter the number of array eles: ");
    scanf("%d",&n);
    printf("Enter the elements of array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }
    printf("Sum of the all eles in that array is: %d\n",sum);
    printf("Avg of the array sum is %d\n",sum/n);
    printf("Max and min of array is %d and %d respectively",max,min);
    return 0;
    
}