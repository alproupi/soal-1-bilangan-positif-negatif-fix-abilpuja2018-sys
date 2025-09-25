#include <stdio.h>

int main() {
  int bilangan;

  printf ("masukkan bilangan bulat:");
  scanf ("%d", &bilangan);
  if (bilangan >0)
  {
    printf("bilangan positif.");
  } else if (bilangan < 0)
  {
    printf("bilangan negatif.");
  } else {
    printf("nol.");
  }
  return 0;
}