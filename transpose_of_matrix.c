#include<stdio.h>
int main(){
    //Array --> arr[100] = {1,2,3,4,5};
    //double array--> arr[row][column] = {1 2 3
    //                                    4 5 6
    //                                    7 8 9}
    int n;
    printf("Enter the number of rows and cols of matrix: ");
    scanf("%d",&n);
    int arr1[25][25];
    int arr2[25][25];
    printf("Enter the matrix: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr2[i][j] = arr1[j][i];
        }
        
    }
    printf("Transpose of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
        
    }
    printf("\nis\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
        
    }

    
}

