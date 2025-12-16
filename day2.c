//    0 1 2 3 4 | 5 6 7 8 9
#include <stdio.h>
#include <stdlib.h>

int main() {
  int counter = 0;
  int num_len;
  unsigned int first = 0;
  unsigned long last = 0;
  char input;
  char str[20];
  int help = 0;
  unsigned long sum = 0;
  int eh;

  while (!(input == 'A')) {
    scanf("%lu-%lu,", &first, &last);
    printf("\n-------------------------------\nChecking: %lu-%lu\n", first,
           last);
    while (first != last - 1) {
      num_len = 0;
      first++;
      sprintf(str, "%d", first);
      for (int i = 0; i < 20; i++) {

        if (str[i] != NULL) {
          num_len++;
          // printf("counter!");
        }
      }
      if (num_len % 2 == 0) {

        help = num_len / 2;
        eh = 0;
        for (int x = 0; x < help; x++) {
          if (str[x] == str[x + help]) {
            // printf("%d-%d: %u,%d\n", str[x] - '0', str[x + help] - '0',
            // first,
            //        num_len);
            eh++;
            if ((x + 1 == help) && (eh == help)) {
              sum += first;
              // printf("\n%lu\n-------------------------", first);
              printf("\n------------\n%lu\n-------------\n", sum);
            }
          }
        }
      } else
        continue;
      // printf("noneven: %d\n", first);
    }
  }
}
