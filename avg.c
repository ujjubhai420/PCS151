#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter The number of terms ");
  int n;
  float sum=0;
  scanf("%d",&n);
  //for loop
  for(int i=1;i<=n;i++)
  {
    printf("Enter The number ");
    int c;
    scanf("%d",&c);
    sum=sum+c;
    
  }
  printf("The average is %0.2f",sum);
  //while
  int i=1;
  while(i<=n)
  {
    printf("Enter The number ");
    int c;
    scanf("%d",&c);
    sum=sum+c;
    i++;
  }
  i=1;
  //do while
  do{
     printf("Enter The number ");
     int c;
     scanf("%d",&c);
     sum=sum+c;
     i++;
  }while(i<n);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}