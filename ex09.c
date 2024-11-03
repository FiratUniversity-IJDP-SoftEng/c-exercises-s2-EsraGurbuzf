#include <stdio.h>
int main(void){
  int e = 0;
  int sum = 0;
  int count = 0;
  while(e != -1){
    printf("Write a number: \n");
    scanf("%d", &e);
    if(e != -1){
      sum = sum + e;
      count++;
    }
    if (e == -1) {
      break;  
    }
  } 
  float average = (float)sum / count;
  printf("%d numbers typed.\n", count);
  printf("The sum is: %d\n", sum);
  printf("The average is: %.1f", average);
}
