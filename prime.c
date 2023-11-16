#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter The number ");
  int n;
  scanf("%d",&n);
  int c=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c==2)
    printf("The number %d is Prime ",n);
  else
  printf("The number %d is Not Prime ",n);
 
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}