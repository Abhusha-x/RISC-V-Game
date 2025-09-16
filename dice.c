#include <stdlib.h>

int get_dice(void);

int main(void) { printf(get_dice()); }

int get_dice(void) {
  int num = rand() % 6 + 1;
  return num;
}