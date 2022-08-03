/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

//in this program , if you don't need to enter anymore numbers , you can press -1 
#include <stdio.h>

int main()
{
  int no, sum,  count ;
  count=0;
  sum=0;
  
  printf("Enter number : ");
  scanf("%d", &no);
  
  while (no != -1)
  {
      sum+=no;
      count++;
      printf("Enter number : ");
      scanf("%d",&no);
  }
   
   printf("Sum is : %d", sum);
  return 0;
}

