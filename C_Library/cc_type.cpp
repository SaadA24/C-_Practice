#include <iostream>
#include <stdio.h>
#include <ctype.h>

int main () 
{
  int a = 0;
  int b = 0;
  int c = 0, d = 12345;
  std::string helloWorld ="helloWorld123...";
  std::string helloWorld1 ="helloWorld...";

  
  while (isalnum(helloWorld[a])) a++;
  while (isalnum(helloWorld1[b])) b++;
  while (isdigit(helloWorld1[c])) c++;




  printf("Using isalnum(): The first %d characters are alphanumeric.\n", a);
  printf("Using isalpha(): The first %d characters are alphabetic.\n", b);
  printf("Using isdigit: c is %d. \n", c);



  return 0;
}

/*

Notes:
1) isalnum(): Checks for either a decimal digit or an uppercase or lowercase letter. Non-zero is true / Zero is false.
2) isalpha(): Checks for either an uppercase or lowercase letter. Non-zero is true / Zero is false.
3) isdigit() Checks for decimal digit character. Non-zero is true / Zero is false.


*/
