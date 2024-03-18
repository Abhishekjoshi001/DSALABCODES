#include<stdio.h>
#include<math.h>
int powerf(int n)
{
    int rem , power=0;
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        power++;
    }
    return power;
    
}
int main(){
    int n;
    int rem;
    int sum=0;
    printf("Enter the number n\n");
    scanf("%d",&n);
    int power;
    //scanf("%d",power);
    int a = powerf(n);
    while(n!=0)
    {
        rem=n%10;
        sum = sum + pow(rem,a);
        rem;
        n=n/10;
    }
    printf("%d",sum);
}