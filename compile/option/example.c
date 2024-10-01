#include<stdio.h>

#ifdef DEBUG10

int test = 10;

#endif


#ifdef DEBUG20

int test = 20;

#endif

int main() {

  printf("test: %d\n", test);


}

