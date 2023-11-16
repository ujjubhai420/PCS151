#include<stdio.h>
void main()
{ int arr[10];
  arr[]={45,15,78,56,78,23};//assuming the max size of array as 10 and the elements array as well
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Array before \n");
  for(int i=0;i<6;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\nEnter the number you want to enter ");
  int n;
  scanf("%d",&n);
  printf("Enter the postion you want to enter ");
  int p;
  scanf("%d",&p);
  for(int i=6;i>p;i--)
  {
    arr[i+1]=arr[i];
  }
  arr[p-1]=n;
  printf("Array After \n");
    for(int i=0;i<7;i++)
    {
      printf("%d ",arr[i]);
    }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}