#include <stdio.h>
#include<math.h>
int main(){
  float math,phy,chem; 
  float mains,avg;       
  char snu;
  printf("Enter the marks obtained in Maths:");
  scanf("%f",&math);
  printf("Enter the marks obtained in Physics: ");
  scanf("%f",&phy);
  printf("Enter the marks obtained in Chemistry: ");
  scanf("%f",&chem);
  avg = (math+phy+chem)/3;
  printf("Enter the JEE percentage score: ");
  scanf("%f",&mains);
  printf("Did Udit clear the SNU SAT exam? (y/n):");
  scanf("%s",&snu);
  printf("The average marks is: %f\n",avg);
  printf("Eligibility Score: %i", avg>90 && (mains>98 || snu=='y'));
  return 0;
}