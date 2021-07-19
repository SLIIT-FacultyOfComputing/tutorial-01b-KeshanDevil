/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
      int m1,m2;
      printf("input mark");
      scanf("%d",&m1);
      printf("input mark");
      scanf("%d",&m2);
   int avg;
   int sum;
   sum=m1+m2;
   avg=sum/2;
   
   printf("%d",avg);
  return 0;
}

