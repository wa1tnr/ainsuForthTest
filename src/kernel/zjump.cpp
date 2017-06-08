// Wed Jun  7 21:40:26 UTC 2017
// 4735-a0e

#include <Arduino.h>
#include "../../yaffa.h"
// #include "zjump.h"
// #include "Error_Codes.h"

#ifdef KERN_ZJUMP
extern const char zjump_str[]; // = "zjump";
void _zjump(void) {
  if (!dStack_pop()) ip = (cell_t*)((size_t)ip + *ip);
  else ip++;
}

#endif
