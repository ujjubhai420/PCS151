#include<stdio.h>
void main()
{
  printf("\t \t \t \t \t ************INPUT************ \n");
  int array1[5]={10,20,35,64,80};     //assuming the sorted array
  int array2[5]={22,45,68,78,90};
  int merged_array[10];
  int c1=0,c2=0,k=0;
  while(c1<5 && c2<5)
  {
    if(array1[c1]<array2[c2])
    {
        merged_array[k]=array1[c1];
        k++;
        c1++;
    }
    else
    {
         merged_array[k]=array2[c2];
        k++;
        c2++;
    }
  }
  while(c1<5)
  {
        merged_array[k]=array1[c1];
        k++;
        c1++;
  }
  while(c2<5)
  {
         merged_array[k]=array2[c2];
        k++;
        c2++;
  }

  printf("Array 1 \n");
    for(int i=0;i<5;i++)
    {
      printf("%d ",array1[i]);
    }
  printf("\nArray 2 \n");
    for(int i=0;i<5;i++)
    {
      printf("%d ",array2[i]);
    }
  printf("\nMerged array \n");
    for(int i=0;i<10;i++)
    {
       printf("%d ",merged_array[i]);
    }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}