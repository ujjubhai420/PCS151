#include<stdio.h>
int find_gcd(int x,int y)
{
    if(x%y==0)
     return y;
    else
    {
        find_gcd(y,(x%y));
    }

}
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the number ");
  int n;
  scanf("%d",&n);
  printf("Enter the number ");
  int m;
  scanf("%d",&m);
  if(n<m)
  {
    int t=m;
    m=n;
    n=t;
  }
  int gcd=find_gcd(n,m);
  printf("GCD is %d",gcd);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}