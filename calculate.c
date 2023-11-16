#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int x;
  printf("Enter the value ");
  scanf("%d",&x);
  int fx=0;
  if(0<=x && x<=10)
  {
   fx=x*x+2;
  }
  else if(11<=x && x<=20)
  {
   fx=x*x+2*x;
  }
  else if(21<=x && x<=30)
  {
   fx=x*x*x+2*x*x;
  }
  else 
  {
    fx=0;
  }
  printf("%d",fx);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}