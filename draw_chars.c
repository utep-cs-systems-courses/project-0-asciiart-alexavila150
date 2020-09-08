#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c)
{
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    printf("rowBits: %d", rowBits);
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      printf("colMask: %d", colMask);
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
