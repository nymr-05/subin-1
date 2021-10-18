#include <stdio.h>
int main() {

  char firstL, lastL;
  printf("Enter the first letter of your name: ");
  scanf("%c", &firstL);
  getchar();
  printf("Enter the last letter of your name: ");
  scanf("%c", &lastL);
  getchar();
  printf("The first letter of your name is %c\n", firstL);
  printf("The last letter of your name is %c\n", lastL);

  return 0;
}
