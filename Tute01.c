/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1, no2, sum;
  float avg ;
  
  printf("Enter no 1 : ");
  scanf("%d",&no1);
  
  printf("Enter no 2 : ");
  scanf("%d",&no2);

  sum = no1 + no2;
  printf("Sum is %d\n", sum);

  avg = sum / 2 ;
  printf("Average is %.2f\n", avg);
    
  return 0;
}

