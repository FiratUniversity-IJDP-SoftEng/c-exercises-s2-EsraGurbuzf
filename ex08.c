#include <stdio.h>
int main(void){
  int seq[10];
  int i;
  int sum = 0;
  float average = 0;
  printf("Write 10 numbers:\n");
  for(i = 0; i < 10; i++){
    scanf("%d", &seq[i]);
    sum += seq[i];
  }
  average = sum / 10.0;
  printf("The sum is %d\n", sum);
  printf("The average is %.1f\n", average);
}
