#include<stdio.h>
int main(){
    int l,b,h,r;
    float area;
    int shape;
    printf("Enter the shape: (\n1 for square\n2 for triangle\n3for rectangle\n4 for circle\n)");
    scanf("%d",&shape);
    switch(shape){
        case 1:{
            printf("Enter the length of the square: ");
            scanf("%d",&l);
            printf("Area of the square: %d",l*l);
        }
        break;
        case 2:{
            printf("Enter the height and breadth of the triangle: ");
            scanf("%d%d",&h,&b);
            printf("Area of the traingle: %0.2f",0.5*b*h);
        }
        break;
        case 3:{
            printf("Enter the length and breadth of the rectangle: ");
            scanf("%d%d",&l,&b);
            printf("Area of the rectangle: %d",l*b);
        }
        break;
        case 4:{
            printf("Enter the radius of the circle: ");
            scanf("%d",&r);
            area = 3.14*r*r;
            printf("Area of the circle is: %0.2f",area);
        }
        break;
        default:{
            printf("Invalid input");
        }
    }
    return 0;
}