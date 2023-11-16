#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the nth term you want the series to run ");
  int n;
  scanf("%d",&n);
  int a=0,b=1,s=a+b;
  printf("Fibonacci Series \n%d %d ",a,b);
  for(int i=2;i<=n;i++)
  {
    a=b;
    b=s;
    s=a+b;
    printf("%d ",s);
  }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}