#include <stdio.h>

unsigned char test_bool_logic(unsigned char x, unsigned char y,
                              unsigned char z) {
  return (y | x) & ~z | (~z & y);
}

unsigned char original_bool_logic(unsigned char x, unsigned char y,
                                  unsigned char z) {
  return (~x & y & ~z) | (x & ~y & ~z) | (x & y & ~z);
}

int main() {

  printf("Original bool logic \n");
  printf("%.2x\n", original_bool_logic(0, 0, 0));
  printf("%.2x\n", original_bool_logic(0, 0, 255));
  printf("%.2x\n", original_bool_logic(0, 255, 0));
  printf("%.2x\n", original_bool_logic(0, 255, 255));
  printf("%.2x\n", original_bool_logic(255, 0, 0));
  printf("%.2x\n", original_bool_logic(255, 0, 255));
  printf("%.2x\n", original_bool_logic(255, 255, 0));
  printf("%.2x\n", original_bool_logic(255, 255, 255));

  printf("\n\n");
  printf("Simplified bool logic \n");
  printf("%.2x\n", test_bool_logic(0, 0, 0));
  printf("%.2x\n", test_bool_logic(0, 0, 255));
  printf("%.2x\n", test_bool_logic(0, 255, 0));
  printf("%.2x\n", test_bool_logic(0, 255, 255));
  printf("%.2x\n", test_bool_logic(255, 0, 0));
  printf("%.2x\n", test_bool_logic(255, 0, 255));
  printf("%.2x\n", test_bool_logic(255, 255, 0));
  printf("%.2x\n", test_bool_logic(255, 255, 255));
}
