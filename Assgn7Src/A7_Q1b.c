#include <stdio.h>
int no;
float weight[99],height[99],bmi[99];

float calculateBMI(float weight,float height){
 float ubmi=0;
 ubmi= weight/(height*height);
 return ubmi;
}

int main(){
  printf("Enter no of students: ");
  scanf("%d",&no);
  int i=0;
  while (i<no){
    printf("Enter Details for student %d\n",i+1);
    printf("Weight: ");
    scanf("%f",&weight[i]);
    printf("Height: ");
    scanf("%f",&height[i]);
    bmi[i] = calculateBMI(weight[i],height[i]);
    i++;
  }
  int cn =0;
  printf("\n\nYou would like to see data of which student:");
  scanf("%d",&cn);
  printf("Weight: %f Height %f BMI %f",weight[cn-1],height[cn-1],bmi[cn-1]);
  if(bmi[cn-1]>25){
    printf("BMI Category: Overweight");
  }
  else if (bmi[cn-1]>18.5 && bmi[cn-1]<25){
    printf("BMI Category: Normal");
  }
  else if (bmi[cn-1]>17 && bmi[cn-1]<18.5){
    printf("BMI Category: Thiness");
  }
  else{
    printf("BMI Category: Inhumane");
  }
  
  return 0;
}


