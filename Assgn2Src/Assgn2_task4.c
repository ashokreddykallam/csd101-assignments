#include <stdio.h>
int main() {
    //Local Variable declaration
    float celsius_f,farh_f,kelvin_f;
    //Getting scanfs
    printf("Temperature in Celsius: ");
    scanf("%f", &celsius_f);
    //Calculation of fahrenheit and kelvin using given formulae in assignment pdf
    kelvin_f = celsius_f+273.5;
    farh_f = (celsius_f*9/5)+32;

    //Sending printfs
    printf("Temperature in Fahrenheit: %f°F\n", farh_f);
    printf("Temperature in Kelvin: %fK", kelvin_f);
    
    return 0;
}