#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
  char *result;
  int len;
  len = strlen(str);
  result = (char*) calloc(len+1, sizeof(char));
  return result;
}
