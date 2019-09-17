#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#include "bu.h"

//used as the main for entire bu

int main() {
  bigunsigned a,b,c;
  char s[BU_MAX_HEX+1];

  bu_readhex(&a,"CAB51AFFBEEF");
  bu_readhex(&b,"111111111111");

  bu_dbg_printf(&a);

  bu_add(&c, &a, &b);

  bu_dbg_printf(&c);
  return 0;
}
