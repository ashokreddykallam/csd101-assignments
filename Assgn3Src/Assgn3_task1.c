#include <stdio.h>
int main(){
  float mohan,hari,charu,ish,mh,ci;
  printf("Enter Mohan's BMI:");
  scanf("%f",&mohan);
  printf("Enter Hari's BMI:");
  scanf("%f",&hari);
  printf("Enter Charu's BMI:");
  scanf("%f",&charu);
  printf("Enter Ishika's BMI:");
  scanf("%f",&ish);
  mh=mohan+hari;
  ci=charu+ish;
  printf("MH: %f\n",mh);
  printf("CI: %f\n",ci);
  printf("The comparision score for > operator is %i \n",mh>ci);
  printf("The comparision score for = operator is %i \n",mh==ci);
  printf("The comparision score for < operator is %i \n",mh<ci);
  return 0;
}