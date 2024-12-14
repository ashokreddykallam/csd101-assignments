#include <stdio.h>
int no;
float weight[99],height[99],bmi[99];

int printDecoration(int n){
 n = n+1;
 int i=1;
 while(i<n){
   int j=0;
   int g=n;
   while(g>i){
     printf(" ");
     g--;
   }
   while(j<i){
    if(i-j == 1){ 
      printf("*");
    }
    else{
    printf("*~");
    }
    j++;
   }
   i++;
   printf("\n");
 }
 return 0;
}

int main(){
  printf("Enter no : ");
  scanf("%d",&no);
  printDecoration(no);
}


