#include <stdio.h>

int main(){
  char *arr[]={"helloworld","morning"};
  printf("%d %d %d\n",sizeof(arr),sizeof(arr[0]),sizeof(arr[1]));
  return 0;
}
