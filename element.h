#ifndef ELEMENT_H
#define ELEMENT_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

  typedef struct{
    char message[128]; // [x,y,z] m/s
  }Element;

  Element new_Element(char message[128]);
  int print_Element(Element element);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* ELEMENT_H */

