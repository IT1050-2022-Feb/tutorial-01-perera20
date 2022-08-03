/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int min (int minimum);
int max (int maximum);
int mul (int multiply);
int main()
{
   int no1, no2, maximum, minimum, multiply;
   
   printf("Enter a value for no 1 : "); 
   scanf("%d", &no1);
   
   printf("Enter a value for no 2 : "); 
   scanf("%d", &no2);
   
   printf("%d ", minimum(no1, no2)); 
   printf("%d ", maximum(no1, no2)); 
   printf("%d ", multiply(no1, no2));
   
   return 0;
}
int min (int minimum)
{
    int n1, n2;
    if (n1 > n2 )
       minimum == n1 ;
    else 
      minimum == n2;
    return minimum;
}
int max (int maximum);
{
    int n1, n2;
    if (n1 < n2 )
       maximum == n1 ;
    else 
      maximum == n2;
    return maximum;
}
int mul (int multiply);
{
    int n1, n2;
    multiply =  n1 * n2 ; 
    return multiply;
}

