#include <stdio.h>

int main(){
  int assign,rain;
  printf("Assignment Done?: ");
  scanf("%d", &assign);
  printf("Raining?: ");
  scanf("%d",&rain);
  //START NESTED LOOPS
  if (assign == 0){
    printf("Study!");
  }else{
    if(rain == 1){
      printf("Movie watch");
    }
    else{
      printf("Hangout with friends");
    }
  }
  return 0;
}
