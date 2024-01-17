#include <iostream>
#include <stdio.h>
#include <ctype.h>

int main () 
{
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  int f = 0;
  int g = 0;
  int h = 0;
  int i = 0;
  int j = 0;
  int k = 0;
  int l = 0;

  std::string helloWorld ="helloWorld123...";
  std::string helloWorld1 ="helloWorld...";
  char helloWorld2[] ="HELLOWORLD";
  char year[] = "2024";
  char year1[] = "   2024";
  char year2[] = "2024\n";
  char year3[] = "   2024";
  char hexExample[] = "ffff";
  long int hexNumber;
  std::string monYear = "jan2024";
  std::string monYear2 = "!!!jan2024";
  std::string monYear3 = "  jan2024";


  while (isalnum(helloWorld[a])) a++;
  while (isalnum(helloWorld1[b])) b++;
  while (isdigit(year[c])) c++;
  while (isblank(year1[d])) d++;
  while(!iscntrl(year2[e])) e++;
  while(!isgraph(year3[f])) f++;
  while(islower(monYear[g])) g++;
  while(isprint(monYear[h])) h++;
  while(ispunct(monYear2[i])) i++;
  while(isspace(monYear3[j])) j++;
  while(isupper(helloWorld2[k])) k++;
  if(isxdigit(hexExample[l])) hexNumber = strtol(hexExample, NULL, 16);

  printf("Using isalnum(): The first %d characters are alphanumeric.\n", a);
  printf("Using isalpha(): The first %d characters are alphabetic.\n", b);
  printf("Using isdigit(): The first %d characters are digits.\n", c);
  printf("Using isblank(): The first %d characters are blank.\n", d);
  printf("Using iscntrl(): The first %d characters are not control characters.\n", e);
  printf("Using isgraph(): %d characters have graphical representation.\n", f);
  printf("Using islower(): The first %d characters are lowercase.\n", g);
  printf("Using isprint(): The first %d characters are printable.\n", h);
  printf("Using ispunct(): %d characters are punctuation.\n", i);
  printf("Using isspace(): %d characters are spaces.\n", j);
  printf("Using isupper(): The first %d characters are uppercase.\n", k);
  printf("Using isxdigit(): The hexadecimal number %lx is %ld.\n", hexNumber, hexNumber);

  return 0;
}

/*

Notes:
1) isalnum(): Checks for either a decimal digit or an uppercase or lowercase letter. Non-zero is true / Zero is false.
2) isalpha(): Checks for either an uppercase or lowercase letter. Non-zero is true / Zero is false.
3) isdigit(): Checks for decimal digit character. Non-zero is true / Zero is false.
4) isblank(): Checks for empty space. Non-zero is true / Zero is false.
5) iscntrl(): Checks for control characters like \n and end of file (EOF). Non-zero is true / Zero is false.
6) isgraph(): Checks for graphical representation (characters than can be printed), not space " ". Non-zero is true / Zero is false.
7) islower(): Checks for lower case characters. Non-zero is true / Zero is false.
8) isprint(): Checks for all printable characters. Non-zero is true / Zero is false.
9) ispunct(): Checks for all punctuation characters. Non-zero is true / Zero is false.
9) isspace(): Checks for all white spaces. Non-zero is true / Zero is false.
9) isxdigit(): Checks for hexdecimal digit character. Non-zero is true / Zero is false.

- printf for format
- most are bool and need to add a counter to count occurrences
- All are a pointer to object type (using while) which is why int doesn't work but string does.
- std::string not compatible with some old c code, so have to use c style string instead
- Can't read from input stream = end of file (EOF) characters
- Graphical representation (characters than can be printed)
- Can put the following after %l for printing (%lx)
    - x prints an unsigned number in hexadecimal.
    - o prints an unsigned number in octal.
    - u prints an unsigned number in decimal
    - d prints a signed number in decimal
    - i prints a signed number in decimal


*/
