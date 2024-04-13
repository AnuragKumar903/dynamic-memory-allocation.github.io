#include <stdio.h>

int main(void) {
  int* ptr;
  ptr = (int*)malloc(3* sizeof(int));
  for(int i = 0; i < 3; i++){
   scanf( "%d", &ptr[i]);
  }

  for(int i = 0; i < 3; i++){
    printf( "%d", ptr[i]);
  }  return 0;
}