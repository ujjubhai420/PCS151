#include<stdio.h>
void main()
{   printf("\t \t \t \t \t ************INPUT************ \n");
    printf("Enter the length of the Rectangle ");
    float l;
    scanf("%f",&l);
    printf("Enter the Breadth of the Rectangle ");
    float b;
    scanf("%f",&b);
    float area=l*b;
    printf("Area is %f \n",area);
    printf("Enter the Radius of Circle ");
    int r;
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area is %f \n",area);
    printf("\t \t \t \t \t ************OUTPUT************ \n");
}