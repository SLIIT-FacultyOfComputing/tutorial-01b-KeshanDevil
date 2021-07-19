/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <iostream>

int main() {
   int no1, no2;
   cout<<"Enter a value for no 1 : ";
   cin>>no1;
   cout<<"Enter a value for no 2 : ";
   cin>>no2;
   cout<<minimum(no1, no2);
   cout<<maximum(no1, no2);
   cout<<multiply(no1, no2);
   return 0;
}
