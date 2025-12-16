#include <stdio.h>
#include <string.h>

int clampAtoi(int start, int end, char *str) {
  int num = 0;
  for (int i = start; str[i] != '\0' && i <= end; i++) {
    if (str[i] >= 48 && str[i] <= 57) {
      num = num * 10 + (str[i] - 48);
    } else {
      break;
    }
  }
  return num;
}

int main() {
  char *string = "421113";

  printf("%d", clampAtoi(0, (strlen(string) / 2) - 1, string));
}
