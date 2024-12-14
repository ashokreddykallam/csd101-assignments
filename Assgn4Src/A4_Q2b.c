#include <stdio.h>

int main(){
  int assign,rain,status;
  printf("Assignment Done?: ");
  scanf("%d", &assign);
  printf("Raining?: ");
  scanf("%d",&rain);
  //START SWITCH

  status = assign*2+rain;

  switch (status){
    case 0:
    printf("Do assignment");
    break;
    case 1:
    printf("Do assignment");
    break;
    case 2:
    printf("Go hangout");
    break;
    case 3:
    printf("Go watch movie");
  }
  return 0;
}
