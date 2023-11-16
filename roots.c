#include<stdio.h>
#include<math.h>
void main()
{ float root1,root2;
  printf("\t \t \t \t \t ************INPUT************ \n");
  printf("The Quadritic in form of ax^2+bx+c ");
  printf("Enter a ");
  float a;
  scanf("%f",&a);
  printf("Enter b ");
  float b;
  scanf("%f",&b);
  printf("Enter c ");
  float c;
  scanf("%f",&c);
  float d=b*b-4*a*c;
  if(d>=0)
  {
    root1=(-b+pow(d,0.5))/2*a;
    root2=(-b-pow(d,0.5))/2*a;
    printf("ROOT 1 %0.2f \nROOT 2 %0.2f",root1,root2);
  }
  else{
    float real=-b/2*a;
    float imaginary=pow(-d,0.5)/2*a;
     printf("ROOT 1 %0.2f + %0.2f i \nROOT 2 %0.2f - %0.2f i",real,imaginary,real,imaginary);
  }
  printf("\n\t \t \t \t \t ************OUTPUT************ \n");

}