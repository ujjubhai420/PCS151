#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the number of elements for the array ");
  int n;
  scanf("%d",&n);
  int array[n];
  for(int i=0;i<n;i++)
  {
    printf("Enter the number ");
    scanf("%d",&array[i]);
  }
  printf("Enter the number to search ");
  int k;
  int more=0,less=0,equal=0;
  scanf("%d",&k);
  for(int i=0;i<n;i++)
  {
    if(array[i]>0)
    more++;
    else if(array[i]==0)
    equal++;
    else
    less++;
  }
  printf("THE NUMBER OF TERMS EQUALS TO %d IS %d \n",k,equal);
  printf("THE NUMBER OF TERMS MORE THAN %d IS %d \n",k,more);
  printf("THE NUMBER OF TERMS LESS THAN %d IS %d \n",k,less);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}