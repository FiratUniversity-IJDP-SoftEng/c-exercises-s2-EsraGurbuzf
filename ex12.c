#include <stdio.h>
int main(void) {
  int i;
  int e;
  int result = 1;
  do {
    printf("Write a number between 1 and 50\n");
    scanf("%d", &e);
  } while (e < 1 || e > 50);
  for (i = 1; i <= e; i++) {
    result *= i;
  }
  printf("The factorial of %d is %d\n", e, result);
}

