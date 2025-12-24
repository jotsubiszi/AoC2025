#include <stdio.h>
#include <string.h>

int main(void) {
  char array[999][999];
  FILE *filePointer;
  filePointer = fopen("input.txt", "r");
  int depth = 0;
  char stringInFile[999];
  int adjecentPaper = 0;
  int sum = 0;

  while (fgets(stringInFile, 999, filePointer)) {

    strcpy(array[depth], stringInFile);
    depth++;
  }

  printf("%d x %lu\n", depth, strlen(array[0]) - 1);

  for (int i = 0; i < depth; i++) {
    for (int j = 0; j < strlen(array[0]) - 1; j++) {
      // \/KERNEL\/ ///////////////
      for (int y = -1; y <= 1; y++) {
        for (int x = -1; x <= 1; x++) {
          if (y == 0 && x == 0) {
            continue;
          }
          if (i + y < 0 || i + y >= depth || j + x < 0 ||
              j + x >= strlen(array[0]) - 1) {
            continue;
          }
          if (array[i + y][j + x] == '@') {

            adjecentPaper++;
          }
        }
      }
      // /\KERNEL/\ ///////////////
      // if (array[i][j] == '@') {
      //   // printf("@");
      //   printf("%d", adjecentPaper);
      // } else {
      //   printf(".");
      // }

      if (adjecentPaper < 4 && array[i][j] == '@') {
        sum++;
      }
      adjecentPaper = 0;
    }
    printf("\n");
  }
  printf("%d\n", sum);
  return 0;
}
