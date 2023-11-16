#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the 1. number ");
  int n;
  scanf("%d",&n);
  int min=n;
  for(int i=1;i<=5;i++)
  {
    printf("Enter the %d. number ",i);
    scanf("%d",&n);
    if(min>n)
    min=n;
  }
  printf("Smallest Of The Five Number Is %d",min);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}