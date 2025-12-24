#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  long int input;
  long int input2;
  long int polowa1;
  long int polowa2;
  long long suma = 0;
  char string[20];
  char help[10];
  long int dlugosc = 0;

  while (1) {
    scanf("%ld-%ld,", &input, &input2);
    for (int x = 0; input + x <= input2; x++) {

      sprintf(string, "%ld", input + x);
      dlugosc = strlen(string);
      if (dlugosc % 2 == 0) {
        // printf("parzysta dlugosc\n");
        for (int i = 0; i < dlugosc / 2; i++) {
          help[i] = string[i];
        }
        polowa1 = atoi(help);
        for (int j = dlugosc / 2; j < dlugosc; j++) {
          help[j - dlugosc / 2] = string[j];
        }
        polowa2 = atoi(help);
        if (polowa1 == polowa2) {
          suma += input + x;
          printf("twoja stara lustrzane odbycie: %ld\n", input + x);
        }
      }
    }
    printf("\n-----------------------\nsuma: %lld\n-----------------------\n",
           suma);
  }
}

// 123|123 : liczba
// 012|345 : ID w stringu(szuflada z przegrodami)
// 385350926-385403705,48047-60838,6328350434-6328506208,638913-698668,850292-870981,656-1074,742552-796850,4457-6851,138-206,4644076-4851885,3298025-3353031,8594410816-8594543341,396-498,1558-2274,888446-916096,12101205-12154422,2323146444-2323289192,37-57,101-137,46550018-46679958,79-96,317592-341913,495310-629360,33246-46690,14711-22848,1-17,2850-4167,3723700171-3723785996,190169-242137,272559-298768,275-365,7697-11193,61-78,75373-110112,425397-451337,9796507-9899607,991845-1013464,77531934-77616074
