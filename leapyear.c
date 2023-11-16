#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int n;
  printf("Enter the year ");
  scanf("%d",&n);
  if(n%100==0)
  {  if((n/100)%4==0)
     printf("Leap Year");
     else
     printf("Not A Leap Year");
  }
  else
  {
     if(n%4==0)
     printf("Leap Year");
     else
     printf("Not A Leap Year");
  }

  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}