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

int main(void) {
  int i = read_int();
  int count = 0;
  while (i != READ_INT_FAIL) {
  int pre_int = i;
    i = read_int();
    if (pre_int == i) {
    count += 1;
    }
    else {
    printf("%d %d\n", (count + 1), pre_int);
      count = 0;
    }
    
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
