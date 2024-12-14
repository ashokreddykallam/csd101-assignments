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
   int j=0;
   while(j != n){
     if(bmi_arr[j]> 18.5 && bmi_arr[j] <25){
       printf("\nBMI of student %d is NORMAL, Details as follows",j+1);
       printf("Weight: %f\nHeight:%f\nBMI: %f",w_arr[j],h_arr[j],bmi_arr[j]);
     }
 
     j++;
   }
   return 0;
}
