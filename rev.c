#include<stdio.h>
int temp=0;
int reverse(int n)
{
  if(n<9)
  return ((temp*10)+n);
  else{
     temp=temp*10+(n%10);
     reverse(n/10);
  }
}
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the number ");
  int n;
  scanf("%d",&n);
  int r=reverse(n);
  printf("Reverse is %d",r);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}