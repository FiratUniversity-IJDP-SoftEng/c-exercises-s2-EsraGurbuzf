#include <stdio.h>

int main (void){
  for(int i = 1; i <=10; i++)
  {
    printf("%d  ", i*5);
    printf("%d  ", 100-((i-1)*10+1));
    printf("%d\n", i);
  }
}
