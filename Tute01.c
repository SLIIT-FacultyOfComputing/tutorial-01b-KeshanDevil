/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
      int m1,m2;
      cout<<"input mark";
      cin>>m1;
      cout<<"input mark";
      cin>>m2;
   int avg;
   int sum;
   sum=m1+m2;
   avg=sum/2;
   
   cout<<"average:"<<avg;
  return 0;
}

