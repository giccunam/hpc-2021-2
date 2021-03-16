#include <stdio.h>
#include <stdlib.h>
#include "element.h"

int main(int argn,char **argc){
  Element element;
  int x;
  if (argn > 1){
    element = new_Element(argc[1]);
    print_Element(element);
    //printf("%s %i\n",argc[1],argn);
  }else{
    printf("We need more arguments!\n");
  }
  return 0;
}
