#include <stdio.h>

int monthSaving(int n) {
  if (n == 0) {
    return 0; 
  } else if (n == 1) {
    return 10; 
  } else {
    return monthSaving(n - 1) + monthSaving(n - 2);
  }
}

int main() {
  int month;
  printf("Enter the month number:");
  scanf("%d", &month);
  int savings = monthSaving(month);
  int total = 0;
  for (int i = 0; i <= month; i++) {
    total += monthSaving(i);
  }
  printf("In month %d, you will save: %d\n", month, savings);
  printf("Total savings after %d months will be: %d\n", month, total);
  return 0;
}