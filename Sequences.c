#include "Sequences.h"
#include <stdlib.h>
#include <stdio.h>





/**
 * Returns the value of the fibonacci sequence at index n calculated sequentially
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/
long long int Sequences_sfibo(long long int n){
  long long int temp1=1, temp2=1, fibo=0;
  int i;
  if (n==0){
    fibo=0;
  }
  else if (n==1){
    fibo=1;
  }
  else{
  for (i=2;i<n;i++){
    fibo= temp1+temp2;
    temp1=temp2;
    temp2=fibo;
  }
}
  return fibo;
}

/**
 * Returns the value of the fibonacci sequence at index n calculated recursively
 * @param
 *      n (long long int):
 *          Index of the fibonacci sequence
 * @return long long int value
*/
long long int Sequences_rfibo(long long int n){

  if (n==0 || n==1)
  {
    return n;
  }
  else {
    return Sequences_rfibo(n-2)+Sequences_rfibo(n-1);
  }
}
