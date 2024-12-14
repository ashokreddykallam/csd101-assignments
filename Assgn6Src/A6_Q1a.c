#include <stdio.h>
int main(){
   int n,r;
   printf("Enter no of students:");
   scanf("%d",&n);
   int i=0;
   float bmi_arr[100],w_arr[100],h_arr[100];
   while(i != n){
   printf("\nEnter Details for Student %i \n", i+1);
   printf("Enter weight: ");
   scanf("%f",&w_arr[i]);
   printf("Enter height: ");
   scanf("%f",&h_arr[i]);
   bmi_arr[i] = w_arr[i]/(h_arr[i]*h_arr[i]);
   i++;
   }
   printf("Details of which student?: ");
   scanf("%d",&r);
   printf("Weight is: %f, Height is: %f, BMI IS: %f \n",h_arr[r-1],w_arr[r-1],bmi_arr[r-1]);
   if(bmi_arr[r-1]> 17 && bmi_arr[r-1] <18.5){
   printf("MIld thiness \n");
   }
   else if (bmi_arr[r-1]> 18.5 && bmi_arr[r-1] <25){
   printf("Normal \n");
   }
   else if(bmi_arr[r-1]>25){
   printf("Overweight \n");
   }
   else{
   printf("Inhuane \n");
   }
   return 0;
}
