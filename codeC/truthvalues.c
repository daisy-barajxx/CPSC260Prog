#include <stdio.h>
#include <stdbool.h>

int main() {
  bool varTrue = true;
  bool varFalse = false;

  printf("varTrue is: %d\n", varTrue);
  printf("varFalse is: %d\n", varFalse);

  int myVar = 0;

  if(myVar) {
    printf("My variable is true\n");
  } 
  else { 
    printf("My variable is false\n");
  }
  return 0;
  
}