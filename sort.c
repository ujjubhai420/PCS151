#include<stdio.h>
void main()
{ //using bubble sort  
  printf("\t \t \t \t \t ************INPUT************ \n");
  int arr[5];//assuming array of 5 elements for convinence
  for(int i=0;i<5;i++)
  {
    printf("Enter the element ");
    scanf("%d",&arr[i]);
  }
  printf("\n The array before sorting \n");
  for(int i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<4;j++)
    {
        if(arr[j]>arr[j+1])
        {
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
  }
  printf("\n The array after sorting \n");
  for(int i=0;i<5;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}