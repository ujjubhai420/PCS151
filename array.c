#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the number of elements for the array ");
  int n;
  scanf("%d",&n);
  int array[n];
  printf("Enter the number ");
  scanf("%d",&array[0]);
  int min=array[0], max=array[0];
  for(int i=1;i<n;i++)
  {
    printf("Enter the number ");
    scanf("%d",&array[i]);
    if(array[i]>max)
    max=array[i];
    if(array[i]<min)
    min=array[i];
  }
  printf("The minimum number is %d \nThe maximum elment is %d",min,max);
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}