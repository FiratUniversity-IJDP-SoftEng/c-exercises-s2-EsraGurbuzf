#include <stdio.h>
int main(void){
  int r;
  int c; 
  for(r = 1; r <= 5; r++){
    for(c = 1; c <= 5; c++){
      if (r == c || r == 6 - c) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}
