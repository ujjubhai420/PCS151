#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the nth term ");
  int n;
  scanf("%d",&n);
  float sum=0;
  int denom=1;
  printf("1");
  for(int i=1;i<=n;i++)
  {
    if(i%2==0)
    {   printf("-1/%d",denom);
        sum=sum-1.0/denom;
        denom=denom+2;
        
    }
    else
    {   printf("+1/%d",denom);
        sum=sum+1.0/denom;
        denom=denom+2;
    }
  }
  printf("\nSum of series is %0.2f",sum);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}