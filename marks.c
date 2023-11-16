#include<stdio.h>
void main()
{   float sum=0,n;
    printf("\t \t \t \t \t ************INPUT************ \n");
    for(int i=1;i<=5;i++)
    {
        printf("Enter The marks in %d th Subject ",i);
        scanf("%f",&n);
        sum=sum+n;
    }
    float marks=sum/5;
    printf("\t \t \t \t \t ************OUTPUT************ \n");
    printf("Aggregate marks is %0.2f \n",marks);
    printf("Percentage is %0.2f %% \n",marks);
}