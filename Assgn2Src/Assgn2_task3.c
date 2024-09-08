#include <stdio.h>
int main() {
    //Local Variable declaration
    float weight_f,height_f,bmi_f;
    //Getting scanfs
    printf("Weight: ");
    scanf("%f", &weight_f);
    printf("Height: ");
    scanf("%f", &height_f);
    //Calculation of bmi
    bmi_f = (weight_f)/(height_f*height_f);

    //Sending prinfs
    printf("BMI: %f", bmi_f);
    return 0;
}