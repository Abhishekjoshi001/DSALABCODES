#include<stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp = n;
    int rev=0,rem;
    while(n != 0)
    {
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;

    }
    printf("Reverse of the number %d is %d",temp,rev);
    return 0;
}