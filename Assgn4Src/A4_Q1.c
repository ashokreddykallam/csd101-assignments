#include <stdio.h>

int main(){
  float weight,height,bmi;
  printf("Enter your weight in kg: ");
  scanf("%f", &weight);
  printf("Enter your height in meters: ");
  scanf("%f",&height);
  bmi=weight/(height*height);
  if (bmi>17 && bmi<=18.5){
    printf("Mild Thiness\n");
  }
  else if (bmi> 18.5 && bmi<=25){
    printf("Normal\n");
  }
  else if (bmi>25){
   printf("Overweight\n");
  }
  else {
    printf("Inhuamane or wrong input\n");
  }
  return 0;
}
