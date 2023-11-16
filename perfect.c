#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the number ");
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<n;i++)
  {
    if(n%i==0)
    sum=sum+i;
  }
  if(sum==n)
   printf("The number %d is a Perfect number",n);
  else
   printf("The number %d is  NOT a Perfect number",n);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}