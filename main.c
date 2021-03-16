#include <stdio.h>
#include <stdlib.h>

int main(int argn,char **argc){
  if (argn > 1){
    printf("%s %i\n",argc[1],argn);
  }else{
    printf("We need more arguments!\n");
  }
  return 0;
}
