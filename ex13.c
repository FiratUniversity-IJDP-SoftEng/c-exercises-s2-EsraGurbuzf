#include <stdio.h>
int factorial(int e);
int main(void){
  int e;
  do{
  printf("Write a number between 0 and 50:\n");
  scanf("%d",&e);
  }while(e<0 || e>50);
  int result = factorial(e);
  printf("The factorial of %d is %d\n", e, result);
  return 0;
}
int factorial(int e){
  int result = 1;
  int i;
  for(i = 1; i <= e; i++){
    result *= i;
  }
  return result;
}
