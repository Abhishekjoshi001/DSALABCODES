#include<stdio.h>
int main(){
   int a=1,b=1,temp,n;
   printf("Enter then number of fibbo series? ");
   scanf("%d",&n);
   printf("%d %d ",a,b);
   for(int i=0;i<n;i++)
   {
        temp = b;
        b = a+b;
        printf("%d ",b);
        a = temp;
   }
    return 0;
}