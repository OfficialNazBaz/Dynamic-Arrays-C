#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main(void){
  intArray arr1 = {NULL}; //NULL is length - required
  doubleArray arr2 = {NULL};
  charArray arr3 = {NULL};

  int a = 1;
  int b = 2;
  int c = 3;
  double d = 1.0;
  double e = 2.0;
  double f = 3.0;
  char *g = "g";
  char *h = "h";
  char *i = "i";

  append("%d",&arr1,&a); //
  append("%d",&arr1,&b);
  append("%d",&arr1,&c);

  append("%lf",&arr2,&d);
  append("%lf",&arr2,&e);
  append("%lf",&arr2,&f);

  append("%s",&arr3,g);
  append("%s",&arr3,h);
  append("%s",&arr3,i);

  int count;

  printf("intArray:\n");
  for (count = 0;count < 3;count++){
      printf("%d\n",arr1.arr[count]);
  }
  printf("doubleArray:\n");
  for (count = 0;count < 3;count++){
      printf("%lf\n",arr2.arr[count]);
  }
  printf("charArray:\n");
  for (count = 0;count < 3;count++){
      printf("%s\n",arr3.arr[count]);
  }

  free(arr1.arr);
  free(arr2.arr);
  free(arr3.arr);
}
