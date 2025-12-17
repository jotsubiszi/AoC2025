#include <stdio.h>
#include <stdlib.h>
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
  while (1) {
    scanf("%s", str);
    // sprintf(str, "%llu", input);
    // printf("%s", str);
    for (int i = 0; i < strlen(str); i++) {
      if (str[i] > highest) {
        highest = str[i];
        firstHighestID = i;
      }
    }
    if (firstHighestID == strlen(str) - 1) {
      finalStr[1] = highest;
      highest = 0;

      for (int i = 0; i < firstHighestID; i++) {
        if (finalStr[0] < str[i]) {
          finalStr[0] = str[i];
        }
      }
    } else {
      finalStr[0] = highest;
      highest = 0;

      for (int i = firstHighestID + 1; i < strlen(str); i++) {

        if (finalStr[1] < str[i]) {
          finalStr[1] = str[i];
        }
      }
    }
    printf("-----------------------\n%lld\n", clampAtoi(0, 1, finalStr));
    final += clampAtoi(0, 1, finalStr);
    finalStr[0] = 0;
    finalStr[1] = 0;

    printf("%llu\n----------------------\n", final);
  }
}
