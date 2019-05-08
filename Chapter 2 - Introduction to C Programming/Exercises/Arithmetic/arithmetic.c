#include <stdio.h>

int main(void){
  int num1, num2, sum, prod, diff, quoc, rem;

  printf("Enter the first number: \n");
  scanf("%d", &num1);

  printf("Enter the second number: \n");
  scanf("%d", &num2);

  sum = num1 + num2;
  prod = num1 * num2;
  diff = num1 - num2;
  quoc = num1 / num2;
  rem = num1 % num2;

  printf("The sum is %d\n", sum);
  printf("The product is %d\n", prod);
  printf("The difference is %d\n", diff);
  printf("The quocient is %d\n", quoc);
  printf("The remainder is %d\n", rem);
}
