#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n: ");
    scanf("%d",&n);
    int factorial = 1;
    int temp = n;
    while(n!=0)
    {
        factorial = factorial * n;
        n--;
    }
    printf("factorial of %d is %d",temp,factorial);
    return 0;
}