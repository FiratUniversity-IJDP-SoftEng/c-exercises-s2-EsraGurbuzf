#include <stdio.h>

int main(void){
  int i;
  for (i = 100; i >= 50; i--) {
  if (i % 3 == 0) {
    printf("%d ", i);
  }
  }
  return 0;
}
