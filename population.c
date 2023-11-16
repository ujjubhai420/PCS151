#include<stdio.h>
void main()
{ printf("\t \t \t \t \t ************INPUT************ \n");
  printf("Enter the popluation ");
  int pop;
  scanf("%d",&pop);
  int men=0.52*pop;
  int literate=0.48*pop;
  int literatemen=0.35*pop;
  int literatewomen=literate-literatemen;
  printf("Literate man %d\nLitrate women %d",literatemen,literatewomen);

  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}