#include <stdio.h>
#include <stdlib.h>
#include "element.h"

Element new_Element(char message[128]){
  Element element;
  sprintf(element.message, "%s", message );
  //element.message = message;
  return element;
}

int print_Element(Element element){
  printf("%s\n",element.message);
  return 0;
}
