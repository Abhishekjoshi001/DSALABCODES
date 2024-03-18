#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp = n;
    int sum=0,rem;
    while(n != 0)
    {
        rem = n%10;
        sum = sum + rem;
        n = n/10;

    }
    printf("Sum of the digits in number %d is %d",temp,sum);
    return 0;
}