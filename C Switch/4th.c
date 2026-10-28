#include <stdio.h>
int main() 
{
  int day = 6;

  switch (day) {
    case 6:
    case 7:
      printf("Weekend");
      break;
    default:
      printf("Weekday");
  }
  return 0;
}