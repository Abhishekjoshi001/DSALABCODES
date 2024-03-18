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
    if(rev == temp)
    {
        printf("It is a paliandrome number");
    }
    else{
        printf("It is not a paliandrome number");
    }
}