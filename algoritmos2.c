#include <stdio.h>

int main(int argc, char const *argv[]) {
  inc c;
  c = gerchar();
  while (c != EOF) {
    putchar(c);
    c = getchar();
  }
  return 0;
}
