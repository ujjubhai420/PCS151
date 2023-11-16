#include<stdio.h>
void main()
{
    printf("\t \t \t \t \t ************INPUT************ \n");
    printf("Enter the 1st number");
    int n1;
    scanf("%d",&n1);
    printf("Enter the 2nd number");
    int n2;
    scanf("%d",&n2);
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("1.%d \n2.%d \n",n1,n2);
    printf("\t \t \t \t \t ************OUTPUT************ \n");

}