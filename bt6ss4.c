#include <stdio.h>

int main() {
  int number1, number2, number3;
  int max, min, middle;

  printf("Enter three numbers separated by spaces: ");
  scanf("%d %d %d", &number1, &number2, &number3);

  if (number1 > number2) {
    max = number1;
    min = number2;
  } else {
    max = number2;
    min = number1;
  }

  if (number3 > max) {
    middle = max;
    max = number3;
  } else if (number3 < min) {
    middle = min;
    min = number3;
  } else {
    middle = number3;
  }

  printf("Descending order: %d %d %d", max, middle, min);

  return 0;
}

