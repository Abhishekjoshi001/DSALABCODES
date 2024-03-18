#include<stdio.h>
int main(){
    int a,b,ans;
    char op;
    printf("Enter the operation (for example a + b):\n ");
    scanf("%d %c %d",&a,&op,&b);
    switch(op){
        case '+':ans = a+b;
        break;
        case '-':ans = a-b;
        break;
        case '*':ans = a*b;
        break;
        case '/':ans = a/b;
        break;
        default:printf("Enter the correct operation");

    }
    printf("Ans: %d",ans);
    return 0;
}