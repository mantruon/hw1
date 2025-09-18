/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"
// include below was used for testing
#include "iostream"

/* Add a prototype for a helper function here if you need */

/* Hint: by far the easiest way to make this work is to not delete or new nodes, but just to change the pointers. */

void split(Node*& in, Node*& odds, Node*& evens)
{
  // code for base case empty list for input
  if (in == nullptr) {
    std::cout << "in is now empty" << std::endl;
    return;
  }
  // code for testing below:
  std::cout << "In value: " << in->value << std::endl;
  std::cout << "In->next addresss: " << (void*)in->next << std::endl;
  if (in != nullptr) {
    if (in->value%2 == 0) {
      // determines if even
      // trying a different approach using the hint from codio
      std::cout << "We found an even " << std::endl;
      evens = in;
      std::cout << "Evens is " << evens->value << std::endl;
      if (in->next != nullptr) {
        split(in->next, odds, evens->next);
        in = nullptr;
      }
    }
    else if (in->value%2 != 0) {
      // determines if odd
      // trying approach from codio hint
      std::cout << "We found an odd " << std::endl;
      odds = in;
      std::cout << "Odds is " << odds->value << std::endl;
      if (in->next != nullptr) {
       split(in->next, odds->next, evens);
       in = nullptr;
      }
    }
}
// WRITE YOUR CODE HERE
}

/* If you needed a helper function, write it here */
