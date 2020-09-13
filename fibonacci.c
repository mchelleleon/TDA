#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Sequences.h"
#include "files.h"



#define num 6;

int main(int argc, char const *argv[]) {
  clock_t start_t,end_t, total_t;
  long long int n=num;
long long int resultado;
  start_t=clock();
  resultado= Sequences_sfibo(n);
  end_t=clock();
  total_t=(double)(end_t - start_t)/CLOCKS_PER_SEC;
  printf ("Tiempo iterativo: %lu",total_t);
  printf("%lld ", resultado);

  n=num;
  start_t=clock();
  resultado= Sequences_rfibo(n);
  end_t=clock();
  total_t=(clock() - start_t)/(double)CLOCKS_PER_SEC;
  printf ("Tiempo recursivo: %lu",total_t);
  printf("%lld \n", resultado);

  return 0;
}
