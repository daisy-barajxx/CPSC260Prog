// C language
#include<stdio.h>
#include<stdbool.h>

int main() 
{
  int size = sizeof(char);
  printf("char is: %d bytes\n", size); //print an integer (replace %d ) 

  size = sizeof(bool);
  printf("bool is: %d bytes\n", size);

  size = sizeof(int);
  printf("int is: %d bytes\n", size);

  size = sizeof(float);
  printf("float is: %d bytes\n", size);

  size = sizeof(double);
  printf("double is: %d bytes\n", size);


  return 0;
}