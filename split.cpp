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

/* Add a prototype for a helper function here if you need */

/* Hint: by far the easiest way to make this work is to not delete or new nodes, but just to change the pointers. */

void split(Node*& in, Node*& odds, Node*& evens)
{
  if (in->value%2 == 0) {
    // determines if even
    // trying a different approach using the hint from codio
    evens = in;
    evens->value = in->value;
    evens->next = nullptr;

    // we want to create a new node and insert it into the list

    // Node* newEven = new Node;
    // evens = newEven;
    // evens->value = in->value;
    // evens->next = nullptr;

    split(in->next, odds, evens->next);
  }
  else if (in->value%2 != 0) {
    // determines if odd
    // trying approach from codio hint
    odds = in;
    odds->value = in->value;
    odds->next = nullptr;

    // we want to create a new node and insert it into the list

    // odds->value = in->value;
    // Node* newOdd = new Node;
    // odds = newOdd;
    // odds->value = in->value;
    // odds->next = nullptr;

    split(in->next, odds->next, evens);
  }
  // if (in == nullptr) {
  //   // do nothing?
  //   // will stop recursive function
  // }
// WRITE YOUR CODE HERE
}

/* If you needed a helper function, write it here */
