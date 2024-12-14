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
  printf("\n\nData inputs are completed\n\n");
  printf("Printing BMI of Student 3 %f\n",bmi[2]);
  return 0;
}


