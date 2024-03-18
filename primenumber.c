#include<stdio.h>
#include<math.h>

int isprime(int n)
{
    int prime;
    if(n==1 || n==0)
        return 2;
    if(n==2)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            prime = 0;
            break;  
        }
        else{
            prime = 1;
        }
    }
    if(prime == 0)
        {
            return 0;
        }
        else{
            return 1;
        }
    return 0;
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int prime = isprime(n);
    if(prime == 0)
    {
        printf("The number is not a prime number");
    }
    else if(prime == 2)
    {
        printf("The number is nither prime nor non prime");
    }
    else if(prime == 1)
    {
        printf("The number is prime number");
    }

    return 0;
}