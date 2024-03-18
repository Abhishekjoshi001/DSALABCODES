#include<stdio.h>
int main(){
    int a = 20;
    int b = 30;
    printf("Numbers before swapping %d %d ",a,b);
    a = a+b; //50
    b = a-b; //20
    a = a-b;//30
    printf("Numbers after swapping %d %d ",a,b);
    return 0;
    
}