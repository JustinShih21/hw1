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

void split(Node*& in, Node*& odds, Node*& evens)
{
  /* Add code here */
// WRITE YOUR CODE HERE

  if (in == nullptr) {
    odds = nullptr;
    evens = nullptr;
    return;
  }

  // Make a sub for the node so it doesnt get lost
  Node* inSub = in->next;
  if (in->value % 2 == 0) {
    // Change the odd to point to the new in node
    evens = in;
    evens->next = nullptr;
    in = nullptr;
    // Recursive Line, using in sub and pointing to next node in the odd sequence
    return split(inSub, odds, evens->next);
  }

  else {
    odds = in;
    odds->next = nullptr;
    // Set the old in pointers to 0
    in = nullptr;
    return split(inSub, odds->next, evens);
  }

  in = nullptr;

}

/* If you needed a helper function, write it here */
