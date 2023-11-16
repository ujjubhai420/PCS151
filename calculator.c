#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division \nEnter Your Choice ");
  int ch;
  scanf("%d",&ch);
  float a,b;
  printf("Enter The first number");
  scanf("%f",&a);
  printf("Enter The second number");
  scanf("%f",&b);
  float result;
 
  switch (ch)
  {
  case 1:
          result=a+b;
   
    break;
  case 2:
          result=a-b;
    break;
  case 3:
          result=a*b;
    break;
  case 4:
           result=a/b;
    break;
  default:
    break;
  }
  printf("Answer is %0.2f",result);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}