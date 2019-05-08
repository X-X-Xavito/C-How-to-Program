#include <stdio.h>

int main(void){
  float weight, height, bmi, index;


  printf("Enter your weight: ");
  scanf("%f", &weight);

  printf("Enter your height: ");
  scanf("%f", &height);

  bmi = weight / (height * height);

  printf("Your BMI is %f\n", bmi);

  printf("BMI VALUES\n");
  printf("Underweigth: less than 18.5\n");
  printf("Normal: between 18.5 and 24.9\n");
  printf("Overweight: between 25 and 29.9\n");
  printf("Obese: 30 or greater\n");

}
