

#include <stdio.h>
​
int main() {
  int myInt;
  float myFloat;
  double myDouble;
  char myChar;
 
  printf("%d\n", sizeof(myInt));
  printf("%f\n", sizeof(myFloat));
  printf("%df\n", sizeof(myDouble));
  printf("%c\n", sizeof(myChar));
  
  return 0;
}
