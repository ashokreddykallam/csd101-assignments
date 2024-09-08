#include <stdio.h>
#include<math.h>
int main(){
  float height,radius,length,sa;
  printf("Enter the height of the cylinder (h):");
  scanf("%f",&height);
  printf("Enter the radius of the cylinder (r): ");
  scanf("%f",&radius);
  //Calculation of Length using the formulae given in PDF
  length = sqrt(pow(height,2)+pow(radius,2));
  //Calculation of SA using the formulae given in PDF
  sa = 22*(radius*(radius+length))/7;
  printf("The surface area of the maximum size cone that can be inscribed in the cylinder is: %f\n",sa);
  return 0;
}