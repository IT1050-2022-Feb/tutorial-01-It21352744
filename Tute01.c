/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int mark1,mark2;
  float Average;

  Printf("Enter the first mark");
  scanf("%d",& mark1);
   Printf("Enter the secound mark");
  scanf("%d",& mark2);

  Average=mark1+mark2/2;

  printf("Average=%.2f");


  return 0;
}

