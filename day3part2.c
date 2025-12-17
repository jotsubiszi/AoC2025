#include <stdio.h>
#include <string.h>

long long clampAtoi(int start, int end, char *str) {
  long long num = 0;
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
  unsigned long long input;
  char str[100];
  int highest = 0;
  int firstHighestID = 0;
  char finalStr[2] = {'0', '0'};
  unsigned long long final = 0;

  return 0;
}
