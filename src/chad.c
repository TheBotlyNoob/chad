#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

#define U32_STR_LEN 10

uint64_t parse_int(char *ch);

int main(void) {
  char ch;

  uint32_t lhs = parse_int(&ch);

  if ()

    printf("%d\n", lhs);
  printf("%c\n", getchar());

  return 0;
}

uint64_t parse_int(char *ch) {
  uint8_t i;
  uint64_t num = 0;

  for (i = 0; i < U32_STR_LEN; i++) {
    *ch = getchar();
    if (isdigit(ch)) {
      num = num * 10 + *ch - '0';
    } else {
      break;
    }
  }

  return num;
}
