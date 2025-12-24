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
  char end[12];
  int highest = 0;
  int firstHighestID = strlen(str) - 1;
  int secondHighestID;
  int idTable[12] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
  char finalStr[2] = {'0', '0'};
  unsigned long long final = 0;
  for (int x = 0; x <= 12; x++) {
    for (int i = firstHighestID; i >= 0; i--) {
      if (highest < str[i] - '0') {
        highest = str[i] - '0';
        firstHighestID = i;
      }
    }
    idTable[x] = firstHighestID;
    for (int j = firstHighestID; j < strlen(str); j++) {
    }
  }

  return 0;
}
