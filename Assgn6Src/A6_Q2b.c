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
   int j=0;
   int n=0,r=0;
   printf("\nEnter your threshold value:");
   scanf("%d",&n);
   while(j !=7){
     if(m_arr[j]<=n){
       r++;
     }
     j++;
   }
   printf("\nNo of more than the given value is %d",r);
   return 0;
}
