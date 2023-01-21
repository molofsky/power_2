/* A non-intuitive way to find a power of two with bit manipulation
*
* @author Adrian Molofsky
* @version 10/5/22
*/

#include <stdbool.h> // boolean library
#include <stdio.h>
#include <stdlib.h>

/* Helper function to be called by main. Tells whether a number is a power of two */
bool power_2(int n) {
  return (n & (n - 1) == 0) && (n != 0);
}

int main(int argc, char *argv[]) {
  if (argc == 2) {
    int num = argv[1];
    if (power_2(num)) printf("%d is a power of two\n", num);
    else printf("%d is not a power of two\n", num);
  } else {
    perror("Function accepts one argument");
  }
  return 0;
}
