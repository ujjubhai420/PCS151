#include<stdio.h>
void main()
{   printf("\t \t \t \t \t ************INPUT************ \n");
    printf("Enter your Salary");
    float pay;
    scanf("%f",&pay);
    printf("Dearness allowance is %f \n",(0.40*pay));
    printf("House allowance is %f \n",(0.20*pay));
    printf("Gross salary is %f \n",(0.40*pay));
    printf("\t \t \t \t \t ************OUTPUT************ \n");
}