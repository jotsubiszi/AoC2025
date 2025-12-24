#include <stdio.h>

int main() {

  char char_input;
  int int_input;
  int counter = 0;
  int dial_pointing_at = 50;

  while (!(char_input == 'A')) {

    scanf("%c%d", &char_input, &int_input);

    if (char_input == 'R') {
      dial_pointing_at += int_input;

      while (dial_pointing_at > 99) {
        dial_pointing_at -= 100;
        ++counter;
      }

    } else if (char_input == 'L') {
      if (dial_pointing_at == 0)
        counter--;

      dial_pointing_at -= int_input;

      while (dial_pointing_at < 0) {
        counter++;
        dial_pointing_at += 100;
      }

      if (dial_pointing_at == 0)
        counter++;

    } else
      continue;

    printf("-------------------------------\n%c%d\nCounter: %d\nDial: %d\n",
           char_input, int_input, counter, dial_pointing_at);
  }
  return 0;
}
