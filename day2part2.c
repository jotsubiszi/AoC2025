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
long long logic(long long dlugosc, char *string) {
  long long polowa1;
  long long polowa2;
  long long suma = 0;
  int helpMe = 0;
  for (int podzielnosc = 2; podzielnosc <= dlugosc; podzielnosc++) {
    if (dlugosc % podzielnosc == 0) {
      helpMe = 0;
      for (int x = 0; x < dlugosc; x += dlugosc / podzielnosc) {
        if (helpMe == 0) {
          polowa1 = clampAtoi(x, (x + dlugosc / podzielnosc) - 1, string);
          polowa2 = polowa1;
          helpMe++;
        } else {
          polowa2 = clampAtoi(x, (x + dlugosc / podzielnosc) - 1, string);
          if (polowa1 != polowa2) {
            break;
          } else if (polowa1 == polowa2) {
            helpMe++;
            if (helpMe == podzielnosc) {
              suma = atoll(string);
              return suma;
            }
          }
        }
      }
    }
  }
  return 0;
}

int main() {
  long long input;
  long long input2;
  unsigned long long sumaKoncowa = 0;
  char string[50];

  while (1) {
    scanf("%lld-%lld,", &input, &input2);

    for (int i = 0; input + i <= input2; i++) {
      sprintf(string, "%lld", input + i);
      if (logic(strlen(string), string)) {
      }
      sumaKoncowa += logic(strlen(string), string);
    }

    printf("%lldu\n", sumaKoncowa);
  }

  return 0;
}
