#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
  char str[100];
  scanf("%s", str);
  for (int i = 0; str[i]; i++){
    str[i] = tolower(str[i]);
  }

  printf("%s", str);
  return 0;
}