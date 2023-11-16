#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int n=1;
  for(int i=1;i<=5;i++)
  {
    if(i%2==0)
    n=0;
    for(int j=1;j<=i;j++)
    {
        printf("%d ",n);
        if(n==1)
        n=0;
        else
        n=1;
    } 
    if(n==1)
    n=0;
    else
    n=1;
    printf("\n");
  }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}