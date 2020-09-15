/////////////////////////////////////////////////////////////////////////////
// INTEGRITY INSTRUCTIONS (v2)

// Explicitly state the level of collaboration on this question
// Examples:
//   * I discussed ideas with classmate(s) [include name(s)]
//   * I worked together with classmate(s) in the lab [include name(s)]
//   * Classmate [include name] helped me debug my code
//   * I consulted website [include url]
//   * None
//
// A "None" indicates you completed this question entirely by yourself
// (or with assistance from course staff, which you do not have to mention)
/////////////////////////////////////////////////////////////////////////////
// INTEGRITY STATEMENT:
// I received help from and/or collaborated with:

// None

// Name: Eric Chen
// login ID: e56chen
/////////////////////////////////////////////////////////////////////////////

#include "cs136.h"
int total(int even, int odd) {
  int n = read_int();

  if (n == READ_INT_FAIL) {
    printf("%d\n", even);
    printf("%d\n", odd);
  }
  else if (n%2 == 0) {
    even += 1;
    total(even, odd);
  }
  else if (n%2 != 0) {
  odd += 1;
    total(even, odd);
  }
  return 1;
}

int main(void) {
  total(0, 0);
}
