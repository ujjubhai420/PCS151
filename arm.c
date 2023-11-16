#include<stdio.h>
#include<math.h>
void check_arm(int n)
{
    int t=n;
    int c=0,arm=0,r=0;
    while(t>0)
    {
        t=t/10;
        c++;
    }
    t=n;
    
    while(t>0)
    {
        r=t%10;
        arm=arm+pow(r,c);
        t=t/10;
    }
    if(arm==n)
    printf("Number %d is an armstrong number",n);
    else
    printf("Number %d is an not armstrong number",n);
}
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the Number ");
  int num;
  scanf("%d",&num);
  check_arm(num);
  
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}