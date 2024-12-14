#include <stdio.h>
int main(){
   int max=0;
   int min=100;
   int avg=0;
   int i=0;
   int m_arr[7];
   while(i != 7){
   printf("Marks for course %i:", i+1);
   scanf("%d",&m_arr[i]);
   if(m_arr[i]>max){
   max = m_arr[i];
   }
   if(m_arr[i]<min){
   min = m_arr[i];
   }
   avg = avg+m_arr[i];
   i++;
   
   }
   printf("Your highest score is: %d \nYour lowest score is: %d\nYour average is: %d\n",max,min,avg/7);
   avg = avg/7;

   if(avg>= 85){
   printf("Grade A \n");
   }
   else if (avg>=75 && avg<85){
   printf("Grade B\n");
   }
   else if (avg>=65 && avg<75){
   printf("Grade c\n");
   }
   else if (avg>=50 && avg<65){
   printf("Grade D\n");
   }
   else if (avg>=30 && avg<50){
   printf("Grade e\n");
   }
   else{
   printf("Inhuane f\n");
   }
   return 0;
}
