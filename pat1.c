#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int c=1;
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=i;j++)
    {
      printf("%d ",c);
      c++;
    } 
    printf("\n");
  }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}