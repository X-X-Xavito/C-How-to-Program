#include <stdio.h>

int main(void){
  int num1, num2, num3, sum, aveg, prod, smallest, largest;

  printf("Enter three different integers: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  sum = num1 + num2 + num3;
  prod = num1 * num2 * num3;
  aveg = sum/3;

  largest = num1;
  smallest = num1;

  if (num2 > largest){
    largest = num2;
  }
  if (num3 > largest){
    largest = num3;
  }

  if (num2 < smallest){
    smallest = num2;
  }

  if (num3 < smallest){
    smallest = num3;
  }

  printf("Sum is %d\n", sum);
  printf("Product is %d\n", prod);
  printf("Average is %d\n", aveg);
  printf("Smallest is %d\n", smallest);
  printf("Largest is %d\n", largest);


}
