#include <stdio.h>
int main() {
  double myValues[] = {1.1, 2.2, 3.3};
  int length = sizeof(myValues) / sizeof(myValues[0]);
  printf("%d", length);
  return 0;
}