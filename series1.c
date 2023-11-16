#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the nth term ");
  int n;
  scanf("%d",&n);
  int sum=0;
  for(int i=1;i<n;i++)
  {     
    if(i==1) 
    printf("(");
    else
    printf("+(");
    for(int j=1;j<=i;j++)
     {  
        sum=sum+j;
        if(j==1)
        printf("%d ",j);
        else  
        printf("+ %d ",j); 
     } 
        printf(")");
  }
  printf("\nSum is %d",sum);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}