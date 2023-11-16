#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the nth term ");
  int n;
  scanf("%d",&n);
  float sum=1;
  printf("1");
  for(int i=2;i<=n;i++)
  { int fact=1;
    printf("+%d/%d!",i,i);
    for(int j=1;j<=i;j++)
    fact=fact*j;
    sum=sum+((float)i/fact);
  }
  printf("\nThe sum is %0.2f",sum);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}