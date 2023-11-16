#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int x;
  printf("Enter the number ");
  scanf("%d",&x);
  int t=x;
  int c=0;
  while(x<100000)
  {
    x=x*2;
    c++;
  }
  printf("Number %d has to be doubled by %d times ",t,c);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}